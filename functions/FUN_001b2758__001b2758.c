/*
 * Program: n42.bin
 * Function: FUN_001b2758
 * Entry: 001b2758
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001b2758(int param_1,code *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  cVar2 = -1;
  if ((param_2 == (code *)0x0) || (param_1 == 0)) {
    (*(code *)&SUB_00fac71c)(0x28,1,0,0);
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    piVar3 = (int *)&DAT_003fc8cc;
    do {
      if (*piVar3 == 0) {
        cVar2 = (char)iVar1;
        *piVar3 = param_1;
        piVar3[1] = (int)param_2;
        DAT_003fc910 = DAT_003fc910 + '\x01';
        if (_DAT_003fc90c == 1) {
          _DAT_003fc90c = 2;
          (*(code *)&SUB_00fafeb4)();
          DAT_003fc910 = '\x01';
        }
        else if (*(code **)(&DAT_003fc8cc + cVar2 * 8) != (code *)0x0) {
          (**(code **)(&DAT_003fc8cc + cVar2 * 8))(0x28,1,0,0);
        }
        if (cVar2 != -1) goto LAB_001b2898;
        break;
      }
      piVar3 = piVar3 + 2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
    if (param_2 != (code *)0x0) {
      (*param_2)(0x28,2,0);
      (*(code *)&SUB_00fac71c)(0x28,2,0,0);
    }
LAB_001b2898:
    iVar1 = (int)cVar2;
  }
  return iVar1;
}

