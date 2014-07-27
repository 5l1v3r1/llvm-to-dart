#ifndef __LLVMTODART_STRUCT_FIELD_HPP__
#define __LLVMTODART_STRUCT_FIELD_HPP__

#include "field.hpp"

namespace llvmtodart {

class StructField : public Field {
public:
  static StructField * CreateWithType(Module & m,
                                      const std::string & fieldName,
                                      Type * fieldType);
  
  StructField(const std::string & fieldName, const std::string & structName);
  
  virtual void PrintType(raw_ostream & stream) const;
  virtual void PrintDeclaration(raw_ostream & stream,
                                const std::string & indent) const;
  virtual void PrintInitialization(raw_ostream & stream,
                                   const std::string & indent,
                                   const std::string & subIndent) const;
  virtual Field * Clone() const;
  
private:
  std::string structName;
};

}

#endif