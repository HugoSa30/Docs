/*
 * Program: n42.bin
 * Function: FUN_001aadd0
 * Entry: 001aadd0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001aadd0(int param_1,int param_2)

{
  param_1 = param_1 * 3;
  (*(code *)&SUB_00015d64)(*(undefined *)(param_1 + 0x175d5));
  if ((param_2 == 2) || (param_2 == 0)) {
    (*(code *)&SUB_000161b0)(*(undefined *)(param_1 + 0x175d5),1);
  }
  else {
    (*(code *)&SUB_000161b0)(*(undefined *)(param_1 + 0x175d5),0);
  }
  (*(code *)&SUB_00015dd8)(*(undefined *)(param_1 + 0x175d5),0);
  if (*(char *)(param_1 + 0x175d6) == '\0') {
    (*(code *)&SUB_00016220)(*(undefined *)(param_1 + 0x175d5),0);
  }
  else {
    (*(code *)&SUB_00016220)(*(undefined *)(param_1 + 0x175d5),1);
  }
  if ((param_2 == 0) || (param_2 == 1)) {
    (*(code *)&SUB_000161e0)(*(undefined *)(param_1 + 0x175d5),2);
  }
  else {
    (*(code *)&SUB_000161e0)(*(undefined *)(param_1 + 0x175d5),1);
  }
  return;
}

