#include <fmt/core.h>
#include <string_view>
#include <string>
#include <fmt/format.h>
#include <iostream>

class KeyValue {
public:
  KeyValue(std::string_view key, int value) : m_key(key), m_value(value){}
  const std::string &getKey() const { return m_key; }
  int getValue() const { return m_value; }
private:
  std::string m_key;
  int m_value;
};

template<>
class fmt::formatter<KeyValue> {
public:
  constexpr auto parse(auto &context) {
    auto iter { context.begin()};
    const auto end { context.end() };
    if (iter == end || *iter == '}') {
      m_outputType = OutPutType::KeyAndValue;
      return iter;
    }
    switch (*iter) {
      case 'a':
        m_outputType = OutPutType::KeyOnly;
        break;
      case 'b':
        m_outputType = OutPutType::ValueOnly;
        break;
      case 'c':
        m_outputType = OutPutType::KeyAndValue;
        break;
      default:
        throw fmt::format_error { "Invalid KeyValue format specifier. "};
    }
    ++iter;
    if (iter != end && *iter != '}') {
      throw fmt::format_error { "Invalid KeyValue format specifier."};
    }
    return iter;
  }

  auto format(const KeyValue &kv, auto &context) {
    switch (m_outputType) {
      using enum  OutPutType;
      case KeyOnly:
        return fmt::format_to(context.out(), "{}", kv.getKey());
      case ValueOnly:
        return fmt::format_to(context.out(), "{}", kv.getValue());
      default:
        return fmt::format_to(context.out(), "{} - {}", kv.getKey(), kv.getValue());
    }
  }
private:
  enum class OutPutType {
    KeyOnly,
    ValueOnly,
    KeyAndValue
  };
  OutPutType m_outputType { OutPutType::KeyAndValue };
};

int main() {
  KeyValue kv {"Key1", 11};
  std::cout<< fmt::format("{}", kv) << "\n";
  std::cout << fmt::format("{:a}", kv) << "\n";
  std::cout << fmt::format("{:b}", kv) << "\n";
  std::cout << fmt::format("{:c}", kv) << "\n";
  // try {
  //   std::cout << fmt::format("{:cd}", kv) << "\n";
  // } catch (const fmt::format_error& caught_expection){
  //   std::cout << caught_expection.what();
  // }
  return 0;
}