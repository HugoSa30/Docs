/*
 * Program: n42.bin
 * Function: FUN_00123e90
 * Entry: 00123e90
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00123e90(int param_1,uint param_2,short param_3,int param_4)

{
  undefined2 uVar1;
  short *psVar2;
  undefined2 *puVar3;
  short sVar4;
  undefined *puVar5;
  byte *pbVar6;
  undefined *puVar7;
  byte *pbVar8;
  
  if (param_3 == 0) {
    if ((bRam0000ec02 & 1) == 0) {
      if ((bRam0000ec02 & 2) != 0) {
        if ((param_2 == uRam0000ec00) && (param_4 == 0)) {
          puVar3 = (undefined2 *)(iRam0000ebf8 + -2);
          if ((param_2 & 0xffff) != 0) {
            puVar5 = (undefined *)(param_1 + -1);
            puVar7 = (undefined *)(iRam0000ebf8 + -1);
            do {
              puVar5 = puVar5 + 1;
              puVar7 = puVar7 + 1;
              *puVar7 = *puVar5;
              param_2 = param_2 + 0xffff;
            } while ((param_2 & 0xffff) != 0);
          }
          uVar1 = func_0xff20d6e4(0,iRam0000ebf8);
          *puVar3 = uVar1;
          return 1;
        }
        if ((int)(param_2 + param_4) <= (int)(uint)uRam0000ec00) {
          psVar2 = (short *)(iRam0000ebf8 + -2);
          sVar4 = *psVar2;
          if ((param_2 & 0xffff) != 0) {
            pbVar8 = (byte *)(iRam0000ebf8 + param_4 + -1);
            pbVar6 = (byte *)(param_1 + -1);
            do {
              pbVar6 = pbVar6 + 1;
              sVar4 = sVar4 + ((ushort)*pbVar6 - (ushort)pbVar8[1]);
              pbVar8 = pbVar8 + 1;
              *pbVar8 = *pbVar6;
              param_2 = param_2 + 0xffff;
            } while ((param_2 & 0xffff) != 0);
          }
          *psVar2 = sVar4;
          return 1;
        }
      }
    }
    else if ((int)(param_2 + param_4) <= (int)(uint)uRam0000ec00) {
      if ((param_2 & 0xffff) != 0) {
        puVar5 = (undefined *)(param_1 + -1);
        puVar7 = (undefined *)(iRam0000ebf8 + param_4 + -1);
        do {
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar5;
          param_2 = param_2 + 0xffff;
        } while ((param_2 & 0xffff) != 0);
      }
      return 1;
    }
  }
  return 0;
}

