/*
 * Program: n42.bin
 * Function: FUN_0011e378
 * Entry: 0011e378
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011e378(uint *param_1,char **param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar4 = *param_2;
  cVar3 = *pcVar4;
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      if (*(short *)((int)param_2 + 6) == 1) {
        (**(code **)(_DAT_003fbd60 + 0x20))(0);
        iVar1 = (**(code **)(_DAT_003fbd60 + 0x18))();
        if (iVar1 != 0) {
          cVar3 = *(char *)((int)param_1 + 0x15);
          goto LAB_0011e650;
        }
        (**(code **)(_DAT_003fbd60 + 0x1c))();
        *(undefined2 *)(param_2 + 2) = 1;
        goto LAB_0011e63c;
      }
      cVar3 = *(char *)(param_1 + 5);
      goto LAB_0011e650;
    }
    if (cVar3 != '\x02') {
      if (cVar3 == '\x03') {
        if (*(short *)((int)param_2 + 6) == 6) {
          uVar2 = 0;
          do {
            *(uint *)(&UNK_003fb1b0 + uVar2 * 4) = (uint)(byte)pcVar4[uVar2 + 1] * *param_1;
            uVar2 = uVar2 + 2 & 0xff;
          } while (uVar2 < 5);
          uVar2 = (uint)(byte)pcVar4[2];
          if (uVar2 < 0xf1) {
            _DAT_003fb1b4 = uVar2 * param_1[1];
          }
          else if (uVar2 == 0xff) {
            _DAT_003fb1b4 = -1;
          }
          else {
            _DAT_003fb1b4 = (uVar2 - param_1[3]) * param_1[2];
          }
          if ((byte)pcVar4[4] == 0xff) {
            _DAT_003fb1bc = -1;
          }
          else {
            _DAT_003fb1bc = (uint)(byte)pcVar4[4] * param_1[4];
          }
          iVar1 = (**(code **)(_DAT_003fbd60 + 0x18))();
          if (iVar1 == 0) {
            (**(code **)(_DAT_003fbd60 + 0x1c))();
            *(undefined2 *)(param_2 + 2) = 1;
            goto LAB_0011e63c;
          }
          if (iVar1 == 1) {
            cVar3 = *(char *)((int)param_1 + 0x16);
          }
          else if (iVar1 == 2) {
            cVar3 = *(char *)((int)param_1 + 0x17);
          }
          else {
            cVar3 = *(char *)(param_1 + 6);
          }
        }
        else {
          cVar3 = *(char *)(param_1 + 5);
        }
      }
      else {
        cVar3 = *(char *)((int)param_1 + 0x19);
      }
      goto LAB_0011e650;
    }
  }
  if (*(short *)((int)param_2 + 6) == 1) {
    if (cVar3 == '\0') {
      iVar1 = (**(code **)(_DAT_003fbd60 + 0x20))(2);
    }
    else {
      iVar1 = (**(code **)(_DAT_003fbd60 + 0x20))(1);
    }
    uVar2 = 0;
    do {
      (*param_2)[uVar2 + 1] = (char)(*(uint *)(iVar1 + uVar2 * 4) / *param_1);
      uVar2 = uVar2 + 2 & 0xff;
    } while (uVar2 < 5);
    uVar2 = *(uint *)(iVar1 + 4) / param_1[1];
    if ((0xf0 < uVar2) && (uVar2 = *(uint *)(iVar1 + 4) / param_1[2] + param_1[3], 0xff < uVar2)) {
      uVar2 = 0xff;
    }
    (*param_2)[2] = (char)uVar2;
    uVar2 = *(uint *)(iVar1 + 0xc) / param_1[4];
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    (*param_2)[4] = (char)uVar2;
    *(undefined2 *)(param_2 + 2) = 6;
LAB_0011e63c:
    **param_2 = cVar3;
    *(undefined *)((int)param_2 + 10) = 1;
    return;
  }
  cVar3 = *(char *)(param_1 + 5);
LAB_0011e650:
  **param_2 = cVar3;
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined *)((int)param_2 + 10) = 2;
  return;
}

