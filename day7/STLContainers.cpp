#include <list>  //linked list (doubly linked list)
#include <iostream>
#include <optional>

/*
containers need to intialized
*/

std::optional< std::list<int> >  CreateMyList(){

    std::string msg=R"(Enter 1 for default, 2 for creating intialized list, 3 for copy)";
    std::cout<<msg;

    int choice;
    std::cin>>choice;
    switch(choice){
    
        case 1:
        {

            return std::list<int>{};
            break;
        
        }
        
        case 2:
         {    
            int size;
            std::cout<<"Enter the number of elements: \n";
            std::cin>>size;
            std::list<int> data(size);
            int element=0;


            for(int i=0;i<size;i++){
                std::cin>>element;
                data.push_back(element);
            }

            //data.emplace_front(100);  //use this when working with your own objects
            return data;
            break;
        }

        case 3:
        {

        std::list<int> data={1,2,3,4,5};
        std::list<int> values(data); //copy everything from data into the values

        std::list <int>  items;

        for(auto itr=data.rbegin(); itr != data.rend();itr++){
            items.push_back(*itr);
        }
        return items;
        break;

       }
        
        default:
         return {};
         break;       

    }


}

int main(){

    auto result=CreateMyList();
    if(result.has_value()){
        std::cout<<result.value().size()<<"\n";

    }

    else{
        std::cout<<"List was not created\n";
    }
}