/*
 * Program: n42.bin
 * Function: FUN_001b24e0
 * Entry: 001b24e0
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001b24e0(char param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  code **ppcVar4;
  code **ppcVar5;
  code **ppcVar6;
  code *local_50 [16];
  
  ppcVar6 = (code **)&stack0xffffffa8;
  if ((param_1 < '\b') && (-1 < param_1)) {
    if (*(int *)(&DAT_003fc8cc + param_1 * 8) == 0) {
      (*(code *)&SUB_00fac71c)(0x28,4,(short)param_1,0);
      uVar1 = 0;
    }
    else {
      (*(code *)&SUB_00fb2454)(6,(int)param_1);
      iVar3 = 4;
      ppcVar4 = (code **)&UNK_003fc8c4;
      ppcVar5 = ppcVar6;
      do {
        pcVar2 = ppcVar4[3];
        ppcVar5[2] = ppcVar4[2];
        ppcVar5[3] = pcVar2;
        pcVar2 = ppcVar4[5];
        ppcVar5[4] = ppcVar4[4];
        ppcVar5[5] = pcVar2;
        iVar3 = iVar3 + -1;
        ppcVar4 = ppcVar4 + 4;
        ppcVar5 = ppcVar5 + 4;
      } while (iVar3 != 0);
      (*(code *)&SUB_00fb2260)();
      iVar3 = 8;
      do {
        ppcVar6 = ppcVar6 + 2;
        if (*ppcVar6 != (code *)0x0) {
          (**ppcVar6)(0x28,4,(short)param_1,0);
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      uVar1 = 1;
    }
  }
  else {
    (*(code *)&SUB_00fac71c)(0x28,3,0,0);
    uVar1 = 0;
  }
  return uVar1;
}

