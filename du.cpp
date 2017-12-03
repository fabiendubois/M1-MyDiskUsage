
#include <iostream>
#include <boost/filesystem.hpp>
int main()
{
    namespace bf=boost::filesystem;
    size_t size=0;
    for(bf::recursive_directory_iterator it("/root/");
        it!=bf::recursive_directory_iterator();
        ++it)
    {   
        if(!bf::is_directory(*it))
        {    
		size+=bf::file_size(*it);
	
		std::cout<< size << "\t" << *it << std::endl;
	}  
    }   
}
