/*
  Q Light Controller
  rgbscript_test.h

  Copyright (C) Heikki Junnila

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0.txt

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/

#ifndef RGBSCRIPT_TEST_H
#define RGBSCRIPT_TEST_H

#include <QObject>

class Doc;
class RGBScript_Test : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void cleanupTestCase();

    void initial();
    void directories();
    void scripts();
    void script();
    void evaluateException();
    void evaluateNoRgbMapFunction();
    void evaluateNoRgbMapStepCountFunction();
    void evaluateInvalidApiVersion();
    void rgbMapStepCount();
    void rgbMapColorArray();
    void rgbMap();
    void runScripts();

private:
    Doc * m_doc;
};

#endif
