#ifndef _FROG_20160309_FROGBASE_H_
#define _FROG_20160309_FROGBASE_H_
#include <ctype.h>

class CFrogBase64
{
public:
	// ���캯��
	CFrogBase64();
	// ��������
	~CFrogBase64();

public:
	// ����
	bool static Encode(const unsigned char *pIn, unsigned long uInLen, unsigned char *pOut, unsigned long *uOutLen);
	// ����
	//bool static Encode(const unsigned char *pIn, unsigned long uInLen, std::string& strOut);
	// ����
	//std::string static base64_encode(unsigned char const* bytes_to_encode, unsigned int in_len, bool bLineGroup = true, bool bFillingEnd = false);
	// ����
	//bool static Decode(const std::string& strIn, unsigned char *pOut, unsigned long *uOutLen);
	// ����
	// bool static Decode(const unsigned char *pIn, unsigned long uInLen, unsigned char *pOut, unsigned long *uOutLen);
	//std::string static base64_decode(std::string const& encoded_string);

	static inline bool is_base64(unsigned char c)
	{
		return (isalnum(c) || (c == '+') || (c == '/'));
	}
};

#endif // _FROG_20160309_FROGBASE_H_
