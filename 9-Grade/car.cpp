#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

struct Automobile
{
	string name;
	string toString()
	{
		return "name: " + name;
	}
};
struct Manager
 {
	vector<Automobile> cars;
	string outputCars()
	{
		string output = "";
		for (auto car: cars)
		{
			output += car.toString() + "\n";
		}
		return output;
	}
	string outputMenu()
	{
		string output = "";
		output += "0) exit";
		output += "1) input element";
		output += "2) output elements";
		output += "3) surpise";
		output += "4) search by int";
		output += "5) search by id";
		output += "6) search by string";
		output += "7) output all elements larger than";
		output += "8) sum all elements";
		output += "9) sort by string";
		output += "10) sort by int";
		output += "11) add element at last place";
		output += "12) delete by string";
		output += "13) change element";


		output += "Select an option: ";

	}
};
struct Engine{
    Manager manager;
    Engine(Manager man){
        this->manager = man;
    }
    void Run(){
        int input;
        this.manager.outputMenu();
        cin >> input;
        while(input != 0){
            switch(){
            case 1:
                //call option 1
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            default:
                return;
                break;
            }
            this.manager.outputMenu();
            cin >> input;
        }
    }
};
int main()
{
	Engine engine;
	engine.Run();

	return 0;
}
