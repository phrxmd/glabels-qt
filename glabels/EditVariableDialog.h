/*  EditVariableDialog.h
 *
 *  Copyright (C) 2019  Jim Evins <evins@snaught.com>
 *
 *  This file is part of gLabels-qt.
 *
 *  gLabels-qt is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  gLabels-qt is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with gLabels-qt.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef EditVariableDialog_h
#define EditVariableDialog_h


#include "ui_EditVariableDialog.h"
#include "model/Variable.h"


namespace glabels
{

	///
	/// New Label Dialog Widget
	///
	class EditVariableDialog : public QDialog, public Ui_EditVariableDialog
	{
		Q_OBJECT

		/////////////////////////////////
		// Life Cycle
		/////////////////////////////////
	public:
		EditVariableDialog( QWidget *parent = nullptr );


		/////////////////////////////////
		// Public methods
		/////////////////////////////////
		void setVariable( const model::Variable& variable );
		model::Variable variable() const;
		

		/////////////////////////////////
		// Slots
		/////////////////////////////////
	private slots:
		void onNameEditChanged();
		void onTypeComboChanged();
		void onValueEditChanged();
		void onColorValueButtonChanged();
		void onIncrementComboChanged();
		void onStepSizeEditChanged();
		void onPadCheckBoxChanged();
		void onPadWidthEditChanged();

		
		/////////////////////////////////
		// Private methods
		/////////////////////////////////
		void updateControls();
		void validateCurrentInputs();

	};

}


#endif // EditVariableDialog_h
