/* 
 * vector : 矢量，与数组对应
 * 
 * 
 * 
 * 
 */
#include <iostream>
#include <vector>
#include <iterator>
#include <assert.h>

int main()
{
    // 0. 创建空矢量对象
    std::vector<int> v0;  
    assert(v0.empty());  

    // 1. 创建含有3个元素的矢量对象，元素值0(默认)
    std::vector<int> v1(3);  
    std::cout << "v1 = ";  
    std::copy(v1.begin(), v1.end(), std::ostream_iterator<int>(std::cout, " "));  
    std::cout << std::endl;  

    // 2. 创建含有5个元素的矢量对象，元素值2
    std::vector<int> v2(5, 2);  
    std::cout << "v2 = ";  
    std::copy(v2.begin(), v2.end(), std::ostream_iterator<int>(std::cout, " "));  
    std::cout << std::endl;  

    // 3. Create a vector v3 with 3 elements of value 1 and with the allocator of vector v2
    std::vector<int> v3(3, 1, v2.get_allocator());  
    std::cout << "v3 = ";  
    std::copy(v3.begin(), v3.end(), std::ostream_iterator<int>(std::cout, " "));  
    std::cout << std::endl;  

    // 4. 用v2拷贝构造v4
    std::vector<int> v4(v2);  
    std::cout << "v4 = ";  
    std::copy(v4.begin(), v4.end(), std::ostream_iterator<int>(std::cout, " "));  
    std::cout << std::endl;  

    // 5. 用v4中的一部分拷贝构造v5
    std::vector<int> v5(v4.begin() + 1, v4.begin() + 3);  
    std::cout << "v5 = ";  
    std::copy(v5.begin(), v5.end(), std::ostream_iterator<int>(std::cout, " "));  
    std::cout << std::endl;  

    // Move vector v2 to vector v6  
    std::vector<int> v6(move(v2));  
    std::cout << "v6 = ";  
    std::copy(v6.begin(), v6.end(), std::ostream_iterator<int>(std::cout, " "));  
    std::cout << std::endl;  


    return 0;
}
