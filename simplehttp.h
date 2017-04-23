#ifndef SIMPLEHTTP_H
#define SIMPLEHTTP_H


namespace simplehttp{
	
	//自定义异常类
	class Wobbly{
	public:
		Wobbly(const char *fmt, ...);
		const char *what() const 
		{
			return m_Message;
		}
	protected:
		enum{
			MAXLEN = 256;
		};
		char m_Message[MAXLEN];
	}
}

#endif
