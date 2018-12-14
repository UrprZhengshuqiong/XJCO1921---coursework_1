#ifndef TREESTRUCTURE_H_INCLUDED
#define TREESTRUCTURE_H_INCLUDED

struct qnode {
  int level;  //������ʾ�ǵڼ����ȼ�
  double xy[2];
  struct qnode *child[4];  //�ṹָ������
  int flag;
};
typedef struct qnode Node;

// function definitions
void printOut( FILE *fp, Node *node );


#endif // TREESTRUCTURE_H_INCLUDED


