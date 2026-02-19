#include <iostream>
int main()
{
int fav_num;
std::cout << "Enter your favourite number : ";
std::cin >> fav_num;
std::cout << "This is my  favourite number too "<< std::endl;
std::cout << "The number is " << fav_num << "which is correct" << std::endl;
int array [3][3]
    {
	{2,4,5},
	{4,6,7},
	{56,5,8}
    };
std::cout << array << std::endl;
std::cout << array [1][2] << "\n";
for(int i=0; i < 3; i++){
    for(int j = 0; j < 3 ; j++){
        std::cout << array[i][j] << " ";
        }
	std::cout << std::endl;
    }
return 0;
}
