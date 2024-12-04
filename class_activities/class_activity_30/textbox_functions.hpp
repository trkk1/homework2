//
//  textbox_functions.hpp
//  CIS25
//
//  Created by Minh Tran on 12/4/24.
//

#ifndef textbox_functions_hpp
#define textbox_functions_hpp

#include <stdio.h>
#include <string>
using namespace std;

namespace textBox{
class TextBox {
private:
    string value;
    
public:
    TextBox();
    
    explicit TextBox(const string& text);
    
    string getValue() const;
    
    void setValue(const string& text);

    void display() const;
};
}
#endif /* textbox_functions_hpp */
