#include "bruhEngine.h"
#include "IMObjectPool.h"

namespace bruhEngine {
	void init() {
		IMObjectPool* IMObjectPool::instance = 0;
		IMObjectPool* IMObjectPool::getInstance();
	}

	void runServer(int port) {

	}

	int attachDaemon(int returner) {
		return returner;
	}

	void runDaemon(int port) {
		int returner = runserver(port);
		attachDaemon(returner);
	}
}