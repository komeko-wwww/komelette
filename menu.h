#include<QWidget>
#include<QVBoxLayout>
#include<QLabel>
#include<QPushButton>
class menuMain : public QWidget {
	private:
		QVBoxLayout *layout;
		QPushButton *btn;
		QLabel *label, *ctr;
	public:
		menuMain(QWidget *parent = nullptr);
		QPushButton* getButton();
		void setCount(QString text);
};
