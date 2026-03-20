/*
 * Program: n42.bin
 * Function: FUN_000f3ae4
 * Entry: 000f3ae4
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined FUN_000f3ae4(uint param_1,short *param_2,short *param_3,int param_4,int param_5,
                      int param_6)

{
  char cVar2;
  undefined4 uVar1;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint in_TBLr;
  int in_TBUr;
  ushort local_48;
  ushort uStack_46;
  
  cVar2 = (*(code *)&SUB_00015d64)(*(undefined *)(param_1 * 3 + 0x175d5));
  uVar1 = (*(code *)&SUB_00016248)(*(undefined *)(param_1 * 3 + 0x175d5));
  uVar3 = in_TBUr * 0x6666 + (int)((ulonglong)in_TBLr * 0x6666 >> 0x20);
  uVar5 = uVar3 * 0x10000 | in_TBLr * 0x6666 >> 0x10;
  uVar7 = uVar5 - *(int *)(&UNK_003fa35c + param_1 * 8);
  *(uint *)(&UNK_003fa348 + param_1 * 4) = uVar7;
  if (cVar2 != '\0') {
    *(uint *)(&UNK_003fa358 + param_1 * 8) = uVar3 >> 0x10;
    *(uint *)(&UNK_003fa35c + param_1 * 8) = uVar5;
  }
  local_48 = (ushort)((uint)uVar1 >> 0x10);
  uStack_46 = (ushort)uVar1;
  if (uStack_46 < local_48) {
    local_48 = local_48 - uStack_46;
  }
  else if (local_48 < uStack_46) {
    local_48 = local_48 - uStack_46;
  }
  else {
    local_48 = 0;
  }
  if (*(char *)((param_1 & 0xff) * 3 + 0x175d6) == '\0') {
    iVar6 = 2;
  }
  else {
    iVar6 = 0x14;
  }
  uVar3 = ((uint)local_48 * iVar6) / 10;
  if (0x7fff < uVar3) {
    uVar3 = 0x7fff;
  }
  *param_3 = (short)uVar3;
  iVar4 = (int)(short)uVar3;
  uVar3 = iVar4 * 10;
  iVar6 = param_2[1] * 10;
  if ((param_4 == 0) || (param_4 == 1)) {
    if (*(short *)(&UNK_003fa350 + param_1 * 2) == 0) {
      *(undefined *)(param_3 + 1) = 2;
    }
    else if (cVar2 == '\0') {
      if ((uint)(param_6 + iVar6 + param_5) < uVar7) {
        *(undefined *)(param_3 + 1) = 5;
      }
      else {
        *(undefined *)(param_3 + 1) = 2;
      }
    }
    else {
      uVar5 = param_6 + iVar6 + param_5;
      if (uVar7 < uVar5) {
        iVar6 = (int)*param_2;
        if ((iVar6 <= iVar4) && (iVar4 <= param_2[1])) {
          if (uVar3 < uVar7) {
            if (uVar7 + iVar4 * -10 < (uint)(param_5 + param_6)) {
              *(undefined *)(param_3 + 1) = 0;
            }
            else {
              *(undefined *)(param_3 + 1) = 4;
            }
          }
          else if (uVar3 - uVar7 < (uint)(param_5 + param_6)) {
            *(undefined *)(param_3 + 1) = 0;
          }
          else {
            *(undefined *)(param_3 + 1) = 4;
          }
          goto LAB_000f3e84;
        }
        if (uVar7 < uVar5) {
          if (uVar3 < uVar7) {
            if (uVar7 + iVar4 * -10 < (uint)(param_5 + param_6)) {
              if (iVar4 < iVar6) {
                *(undefined *)(param_3 + 1) = 3;
              }
              else {
                *(undefined *)(param_3 + 1) = 4;
              }
            }
            else {
              *(undefined *)(param_3 + 1) = 4;
            }
          }
          else if (uVar3 - uVar7 < (uint)(param_5 + param_6)) {
            if (iVar4 < iVar6) {
              *(undefined *)(param_3 + 1) = 3;
            }
            else {
              *(undefined *)(param_3 + 1) = 4;
            }
          }
          else {
            *(undefined *)(param_3 + 1) = 4;
          }
          goto LAB_000f3e84;
        }
      }
      *(undefined *)(param_3 + 1) = 4;
    }
  }
  else if (*(short *)(&UNK_003fa350 + param_1 * 2) == 0) {
    *(undefined *)(param_3 + 1) = 2;
  }
  else if (cVar2 == '\0') {
    if ((uint)(param_6 + iVar6 + param_5) < uVar7) {
      *(undefined *)(param_3 + 1) = 6;
    }
    else {
      *(undefined *)(param_3 + 1) = 2;
    }
  }
  else if ((uVar7 < (uint)((iVar6 - param_5) - param_6)) && (*param_2 <= iVar4)) {
    *(undefined *)(param_3 + 1) = 0;
  }
  else {
    *(undefined *)(param_3 + 1) = 6;
  }
LAB_000f3e84:
  if (cVar2 != '\0') {
    *(undefined2 *)(&UNK_003fa350 + param_1 * 2) = 1;
  }
  return *(undefined *)(param_3 + 1);
}

