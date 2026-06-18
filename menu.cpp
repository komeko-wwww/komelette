#include "menu.h"
menuMain::menuMain(QWidget *parent) : QWidget(parent) {
	layout = new QVBoxLayout(this);
	label = new QLabel("Komeko Roulette");
	ctr = new QLabel("Will you pull the trigger?");
	btn = new QPushButton("Pull the trigger");

	layout->addWidget(label);
	layout->addWidget(ctr);
	layout->addWidget(btn);
}

QPushButton* menuMain::getButton() {
	return this->btn;
}

void menuMain::setCount(QString text) {
	ctr->setText(text);
}
