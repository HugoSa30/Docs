/*
 * Program: n42.bin
 * Function: FUN_001e7878
 * Entry: 001e7878
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e7878(int param_1,int param_2)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined2 local_100;
  undefined local_fe;
  undefined2 local_fd;
  undefined local_fb [91];
  undefined auStack_a0 [4];
  undefined2 local_9c [30];
  byte local_60 [28];
  
  do {
  } while ((short)_DAT_0030501a < 0);
  _DAT_0030501a = _DAT_0030501a & 0x7fff;
  FUN_001e7724(DAT_00fe16e1,local_60,0);
  FUN_001e7524((uint)local_60[0] * 0xf + 0xfe16e6);
  local_100 = 3;
  local_fe = (undefined)_DAT_00fe1772;
  uVar4 = 0;
  do {
    uVar2 = _DAT_00fe1772;
    iVar9 = *(int *)(param_2 + (uVar4 & 0xff) * 4);
    uVar8 = 0;
    iVar5 = 0x1e - (uVar4 & 0xff);
    iVar10 = param_1 / iVar5 + 1;
    if (0 < iVar10) {
      uVar1 = uVar4 & 0xff;
      do {
        local_fd = 0;
        uVar6 = (undefined)uVar2;
        uVar7 = (uVar8 & 0xff) * (0x1e - (uVar4 & 0xff));
        uVar11 = param_1 - uVar7 & 0xff;
        if (iVar5 < (int)uVar11) {
          uVar11 = 0x1e - uVar4 & 0xff;
        }
        local_fb[0] = uVar6;
        *(short *)(local_fb + uVar1 * 3 + -2) = (short)uVar7;
        local_fb[uVar1 * 3] = uVar6;
        for (uVar3 = uVar4 + 2; uVar3 = uVar3 & 0xff, uVar3 < uVar11 + uVar1 + 2; uVar3 = uVar3 + 1)
        {
          *(undefined2 *)((int)&local_100 + uVar3 * 3) = 0;
          (&local_fe)[uVar3 * 3] = uVar6;
        }
        FUN_001e75cc(&local_100,uVar11 + uVar4 + 2,auStack_a0,1);
        uVar3 = 0;
        if (uVar11 != 0) {
          do {
            *(char *)(iVar9 + uVar3 + (uVar7 & 0xffff)) = (char)local_9c[uVar3 + uVar1];
            uVar3 = uVar3 + 1 & 0xff;
          } while (uVar3 < uVar11);
        }
        uVar8 = uVar8 + 1;
      } while ((int)(uVar8 & 0xff) < iVar10);
    }
    uVar4 = uVar4 + 1;
  } while ((uVar4 & 0xff) < 2);
  return;
}

