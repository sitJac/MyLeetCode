#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string text;
    getline(cin, text);
    transform(text.begin(), text.end(), text.begin(), ::toupper);
    cout << text << endl;

    return 0;
}


/*
1.std��ʲô��

std::�Ǹ����ƿռ��ʾ����C++��׼���еĺ������߶������������ռ�std�ж���ģ���������Ҫʹ�ñ�׼�������еĺ��������Ҫʹ��std���޶���
����count�Ǳ�׼���������ṩ�Ķ��󣬶���׼�������ֿռ��б�ָ��Ϊstd��������ʹ��cout��ʱ��Ҫ����std�����������������ͻ��������ǵ��õ�cout�����ֿռ�std�е�cout����������������������������

2.Ϊʲô��cout�ŵ����ֿռ�std�У�

����Ϊ��cout�����Ķ�����ʵ�ʲ����л�����кü���������˵���Լ�Ҳ���ܻ᲻С�Ķ�����һ�������cout����ô������cout����ͻ������ͻ��

3.std����ʲôʱ��ʹ�ã�

һ����˵��std����Ҫ����C++��׼��ʱ��Ҫд��std��
ʹ�÷Ǳ�׼���ļ�iostream.h������д��

4.using namespace std ���߱༭�����ǽ�Ҫʹ�ÿռ�std�еĺ������߶���

5.transform(first,last,result,op)
*/
