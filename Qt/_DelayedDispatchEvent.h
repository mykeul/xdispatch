/*
* Copyright (c) 2011 MLBA. All rights reserved.
*
* @MLBA_OPEN_LICENSE_HEADER_START@
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
* 
*     http://www.apache.org/licenses/LICENSE-2.0
* 
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* @MLBA_OPEN_LICENSE_HEADER_END@
*/



#ifndef _DELAYEDDISPATCHEVENT_H_
#define _DELAYEDDISPATCHEVENT_H_

#include <QObject>
#include "../xdispatch/QtDispatch/qdispatchglobal.h"

QT_BEGIN_NAMESPACE

class QRunnable;

class _DelayedDispatchEvent : public QObject {

	Q_OBJECT

public:
	_DelayedDispatchEvent(QRunnable*);
	~_DelayedDispatchEvent();

public slots:
	void exec();

private:
	QRunnable* content;
};

QT_END_NAMESPACE

#endif /* _DELAYEDDISPATCHEVENT_H_ */