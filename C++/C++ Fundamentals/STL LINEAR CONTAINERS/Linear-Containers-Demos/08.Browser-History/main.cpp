#include <iostream>
#include <stack>
#include <queue>
#include <string>

int main()
{
    std::stack<std::string> history;
    std::queue<std::string> forwardHistory;

    std::string currCommand;
    while(true)
    {
    	std::getline(std::cin, currCommand);

    	if(currCommand == "end")
    	{
    		break;
    	}

    	std::cout << "currCommand: ";
    	if("/back" == currCommand)
    	{
    		if(2 > history.size())
    		{
    			std::cout << "no previous URLs" << std::endl;
    		}
    		else
    		{
				forwardHistory.push(history.top());
				history.pop();
				std::cout << history.top() << std::endl;
    		}
    	}
    	else if("/forward" == currCommand)
    	{
    		if(forwardHistory.empty())
    		{
    			std::cout << "no forward URLs" << std::endl;
    		}
    		else
    		{
        		std::cout << forwardHistory.front() << std::endl;
        		history.push(forwardHistory.front());
        		forwardHistory.pop();
    		}
    	}
    	else
    	{
    		std::cout << currCommand << std::endl;
    		history.push(currCommand);
    		forwardHistory = std::queue<std::string>();
    	}
    }

    return 0;
}
