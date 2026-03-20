/*
 * Program: n42.bin
 * Function: FUN_000f5ddc
 * Entry: 000f5ddc
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4
FUN_000f5ddc(int param_1,uint param_2,byte *param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  char cVar3;
  byte *pbVar4;
  uint uVar5;
  
  cVar1 = DAT_003fc5c7;
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    DAT_005bb748 = 0;
    uVar5 = 0;
    pbVar4 = param_3;
    if (0 < param_4) {
      do {
        if (cVar1 == '\x01') {
          if ((uint)*(byte *)(param_1 + param_2) + (uint)DAT_003fc5b4 < (uint)*pbVar4) {
            return 0;
          }
        }
        else if ((uVar5 != 0) &&
                ((uint)*(byte *)(param_1 + param_2) + (uint)DAT_003fc5b4 < (uint)*pbVar4)) {
          return 0;
        }
        if (((uVar5 != 0) && (param_4 - 1U != uVar5)) &&
           ((int)(uint)*pbVar4 < (int)((uint)*(byte *)(param_1 + param_2) - (uint)DAT_003fc5b4))) {
          return 0;
        }
        cVar3 = (*(code *)&SUB_00065bb4)(param_2,uVar5 & 0xff,param_3,param_5,param_6,param_4);
        if (cVar3 == '\0') {
          return 0;
        }
        (*(code *)&SUB_00065b10)(param_2,param_5);
        param_2 = param_2 + 1 & 0xff;
        if (DAT_003fc5ad <= param_2) {
          param_2 = 0;
        }
        uVar5 = uVar5 + 1 & 0xffff;
        pbVar4 = pbVar4 + 1;
      } while ((int)uVar5 < param_4);
    }
    uVar2 = 1;
  }
  return uVar2;
}

