#include <iostream>

// #include "helperVars"
// #include "configParser"

#include "bruhEngine.h"
// #include "bruhServer"
// #include "bruhClient"

// #include "printerModule"


using namespace std;

int main() {

	bruhEngine::init();

	// printerModule.startInfo("BruhIM initialized");

	// if (config::obj.daemon)
		// printerModule.pushNext("Running live version. Press ctrl^+R to attach to daemon. Press ctrl^+C to kill.");
		// bruhEngine::runServer(DYN_PORT);
		bruhEngine::runServer(4422);
	// else
		// printerModule.pushNext("Attaching server to daemon");
		// bruhEngine::runDaemon(DYN_PORT);
		bruhEngine::runDaemon(4422);
		// printerModule.pushNext("Running at process {}", bruhEngine::getDaemonPid());

	// if (config::obj.logger)
		// bruhEngine::enableLog(config::obj.log_path);
	// else
		// printerModule.startEndWarn("No log_path set in config. The messages won't be archived.");
}