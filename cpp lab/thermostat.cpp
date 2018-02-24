# include <iostream>
using namespace std;
class thermostat
{
public:
	float req_temp;
	float current_temp;
};

class therm_switch :public thermostat
{
public:
	void toggle_switch()
	{
		if (current_temp >= (1.05*req_temp))
		{
			cout << "switched off the thermostat" << endl;
		}
		else if (current_temp <= (.95*req_temp))
		{
			cout << "Thermostat Turned on." << endl;
		}
	}
};
int main()
{
	therm_switch room1;
	cout << "Enter the required temp of room." << endl;
	cin >> room1.req_temp;
	while (1)
	{
		cout << "Enter the current room temperature" << endl;
		cin >> room1.current_temp;
		room1.toggle_switch();
	}
}
