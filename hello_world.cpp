#include<iostream>  //можно еще подкл библиотеку string
int main(){
setlocale(LC_ALL,"RU");
std::cout<<"введите свое имя: "<<std::endl;
std::string name; std::cin>>name;
std::cout<<"hello world,"<<name<<"!"<<std::endl;//можно сразу написать имя в ""
return 0;//стиль хорошего кода
}
