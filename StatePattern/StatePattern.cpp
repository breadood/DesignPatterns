// StatePattern.cpp : Defines the entry point for the console application.
//
// State Pattern, State Machine:
// A pattern in which the objects behavior is determined by
// its state. An object transitions from one state to another.

// A formalized construct which manages state, transitions is state machine
#include "stdafx.h"
#include <map>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
// State Machine
enum class State
{
	off_hook,
	connecting,
	connected,
	on_hook
};

enum class Trigger
{
	call_dialed,
	call_connected,
	stop_using_phone,
	pick_up
};

int main()
{
	map<State, vector<pair<Trigger, State>>> rules;

	rules[State::off_hook] = {
		{
			Trigger::call_dialed, State::connecting
		}, {
			Trigger::stop_using_phone, State::on_hook
		}
	};

	rules[State::connecting] = {
		{
			Trigger::call_connected, State::connected
		}, {
			Trigger::stop_using_phone, State::on_hook
		}
	};

	rules[State::connected] = {
		{
			Trigger::stop_using_phone, State::on_hook
		}
	};

	rules[State::on_hook] = {
		{
			Trigger::pick_up, State::off_hook
		}
	};

    return 0;
}

