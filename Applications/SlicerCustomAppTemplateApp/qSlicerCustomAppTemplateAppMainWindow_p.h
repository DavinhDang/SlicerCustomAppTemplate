/*==============================================================================

  Copyright (c) Kitware, Inc.

  See http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware, Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qSlicerCustomAppTemplateAppMainWindow_p_h
#define __qSlicerCustomAppTemplateAppMainWindow_p_h

// SlicerCustomAppTemplate includes
#include "qSlicerCustomAppTemplateAppMainWindow.h"

// Slicer includes
#include "qSlicerMainWindow_p.h"

//-----------------------------------------------------------------------------
class Q_SLICERCUSTOMAPPTEMPLATE_APP_EXPORT qSlicerCustomAppTemplateAppMainWindowPrivate
  : public qSlicerMainWindowPrivate
{
  Q_DECLARE_PUBLIC(qSlicerCustomAppTemplateAppMainWindow);
public:
  typedef qSlicerMainWindowPrivate Superclass;
  qSlicerCustomAppTemplateAppMainWindowPrivate(qSlicerCustomAppTemplateAppMainWindow& object);
  virtual ~qSlicerCustomAppTemplateAppMainWindowPrivate();

  virtual void init();
  /// Reimplemented for custom behavior
  virtual void setupUi(QMainWindow * mainWindow);
};

#endif
