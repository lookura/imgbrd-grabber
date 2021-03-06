#ifndef IMAGE_THREAD_H
#define IMAGE_THREAD_H

#include <QThread>
#include <QPixmap>


class ImageThread : public QThread
{
	Q_OBJECT

	public:
		ImageThread(QByteArray data, QObject* parent = Q_NULLPTR);

	protected:
		void run();

	signals:
		void finished(QPixmap*, int);
		void finished(QImage*, int);

	private:
		QByteArray m_data;
};

#endif // IMAGE_THREAD_H
