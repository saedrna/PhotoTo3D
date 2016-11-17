#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include "GLWidget3D.h"

class MainWindow : public QMainWindow {
	Q_OBJECT

public:
	Ui::MainWindowClass ui;
	GLWidget3D* glWidget;

public:
	MainWindow(QWidget *parent = 0);

protected:
	void keyPressEvent(QKeyEvent* e);
	void keyReleaseEvent(QKeyEvent* e);

public slots:
	void onClearBackground();
	void onOpenImage();
	void onClearSilhouette();
	void onLoadSilhouette();
	void onSaveSilhouette();
	void onOpenCGA();
	void onUndo();
	void onMassReconstruction();
	void onAutoTest();
	void onTextureMapping();
	void onFacadeReconstruction();
	void onOption();
};

#endif // MAINWINDOW_H
