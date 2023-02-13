/*
 * ESP32TimestampManager.h
 *
 *  Created on: 10 Feb 2023
 *      Author: Lucas Bonvin
 */

#ifndef COMPONENTS_CLOUDIO_ENDPOINT_CPP_INCLUDE_ESP32TIMESTAMPMANAGER_H_
#define COMPONENTS_CLOUDIO_ENDPOINT_CPP_INCLUDE_ESP32TIMESTAMPMANAGER_H_

#include "ITimestampManager.h"

namespace cloudio {

	class ESP32TimestampManager: public ITimestampManager {
	public:
		virtual ~ESP32TimestampManager();

		static ESP32TimestampManager& getInstance();


		// from ITimestampManager interface
		void init();
		long getTimestamp();

	private:
		ESP32TimestampManager();
	};

} /* namespace cloudio */

#endif /* COMPONENTS_CLOUDIO_ENDPOINT_CPP_INCLUDE_ESP32TIMESTAMPMANAGER_H_ */
