
#include "qpdfdocument.h"

int main(int argc, char *argv[])
{
	QPdfDocument pdfDoc;
	QPdfDocument::DocumentError docError = pdfDoc.load("C:\\Users\\zhangpf\\Project\\KTodo\\build\\1.pdf");
    return 0;
}
