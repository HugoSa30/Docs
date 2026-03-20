/*
 * Program: n42.bin
 * Function: FUN_000f5bb4
 * Entry: 000f5bb4
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4
FUN_000f5bb4(undefined4 param_1,int param_2,byte *param_3,uint param_4,undefined4 param_5,
            int param_6)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (DAT_003fc5c6 == '\0') {
    uVar5 = 1;
  }
  else if (param_6 < 2) {
    uVar5 = 1;
  }
  else if ((DAT_003fc5c7 == '\0') && (param_2 == 0)) {
    uVar5 = 1;
  }
  else {
    (*(code *)&SUB_00065b6c)(param_1,param_5,param_4 & 0xff);
    if (*(short *)(&UNK_003fc40c + (param_4 & 0xff) * 0x70) < 1) {
      if ((char)(&UNK_003fc3fb)[param_4 * 0x70] == param_2) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      iVar6 = param_4 * 0x70;
      if ((char)(&UNK_003fc3fb)[iVar6] == param_2) {
        if (param_2 == 0) {
          uVar4 = (uint)*param_3 - (uint)(byte)(&UNK_003fc3fc)[iVar6] & 0xffff;
          if (((int)*(short *)(&UNK_003fc40e + iVar6) < (int)uVar4) ||
             ((int)uVar4 < (int)*(short *)(&UNK_003fc410 + iVar6))) {
            uVar5 = 0;
          }
          else {
            *(undefined2 *)(&UNK_003fc40c + iVar6) = 0xffff;
            *(undefined2 *)(&UNK_003fc40a + iVar6) = 0xffff;
            uVar5 = 1;
          }
        }
        else if (((short)(ushort)(byte)(&UNK_003fc3fc)[iVar6] < *(short *)(&UNK_003fc40a + iVar6))
                || (*(short *)(&UNK_003fc40c + iVar6) < (short)(ushort)(byte)(&UNK_003fc3fc)[iVar6])
                ) {
          uVar5 = 0;
        }
        else {
          *(undefined2 *)(&UNK_003fc40c + iVar6) = 0xffff;
          *(undefined2 *)(&UNK_003fc40a + iVar6) = 0xffff;
          uVar5 = 1;
        }
      }
      else if (param_2 == 0) {
        uVar3 = (ushort)*param_3;
        sVar1 = *(short *)(&UNK_003fc40e + iVar6);
        DAT_005bb748 = sVar1 - (ushort)*param_3;
        sVar2 = *(short *)(&UNK_003fc410 + iVar6);
        if ((short)uVar3 < sVar2) {
          uVar5 = 1;
        }
        else if ((short)uVar3 < sVar1) {
          uVar5 = 1;
        }
        else {
          if (sVar1 < (short)uVar3) {
            if (0 < sVar2) {
              return 0;
            }
            if ((sVar1 < (short)uVar3) && (sVar2 < 0)) {
              return 1;
            }
          }
          uVar5 = 1;
        }
      }
      else if (*(short *)(&UNK_003fc40c + iVar6) < (short)(ushort)param_3[param_2]) {
        if (DAT_005bb748 < 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

