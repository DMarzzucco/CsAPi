#ifndef COMMANDS_STATS_H
#define COMMANDS_STATS_H

#include <csconnector/csconnector.h>

namespace csconnector
{
	namespace command_stats
	{
		void start();
		void stop();

		void count(Commands command);
	}
}

#endif // COMMANDS_STATS_H
