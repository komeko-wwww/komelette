#include<QApplication>
#include<QWidget>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include "menu.h"
// Vars
int pulled {};
int main(int argc, char *argv[]) {
	// Init
	QApplication app(argc, argv);
	QWidget window;

	// Window setup
	window.setWindowTitle("komelette");
	window.resize(600,600);

	// Setup Menu
	auto wLayout = new QVBoxLayout(&window);
	auto menu = new menuMain;
	wLayout->addWidget(menu);

	// Game Logic wip

	QObject::connect(menu->getButton(), &QPushButton::clicked, [&] {
			++pulled; menu->setCount(QString("triggered: %1 times").arg(pulled));
			});

	window.show();
	return app.exec();
}
