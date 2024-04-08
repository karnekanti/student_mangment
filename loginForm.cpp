#include "loginForm.h"

using namespace studentmangment;

int main() {
    loginForm^ loginpage = gcnew loginForm();
    loginpage->ShowDialog();
}