#include "randomApp.h"
#include "ult.h"

#include <QKeyEvent>
#include <qmessagebox.h>
#include <QTextStream>

randomApp::randomApp(QWidget *parent)
    : QMainWindow(parent)
{
    ui->setupUi(this);
	QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));

}

randomApp::~randomApp()
{}

void randomApp::on_pushButton_clicked() {
	QString str = ui->lineEdit->text();
	std::string string = str.toStdString();

	
	int luhn = luhn_algo(string);

	if ( luhn == 1 ) {
		ui->label->setText("Valid");
	}
	else {
		ui->label->setText("Invalid");
	}

	QString type = QString::fromStdString(checkType(string));
	QString test = QString::number(luhn);
	ui->type->setText(type);
}

