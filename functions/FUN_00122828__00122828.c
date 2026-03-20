/*
 * Program: n42.bin
 * Function: FUN_00122828
 * Entry: 00122828
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00122828(undefined4 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  puVar3 = (undefined *)((int)_DAT_003fb2ec + (param_2 - 4));
  puVar4 = (undefined4 *)((uint)((int)_DAT_003fb2ec + 3) & 0xfffffffc);
  if ((int)((int)puVar4 - (int)_DAT_003fb2ec & 0xffU) < (int)param_2) {
    param_2 = (int)puVar4 - (int)_DAT_003fb2ec & 0xff;
  }
  if (param_3 == 0) {
    if (0 < (int)param_2) {
      if ((int)param_2 < 2) {
        *(undefined *)_DAT_003fb2ec = *(undefined *)param_1;
      }
      else if (((uint)_DAT_003fb2ec & 1) == 0) {
        _DAT_003fb2f9 = CONCAT12(*(undefined *)((int)param_1 + 1),_DAT_003fb2fa);
        _DAT_003fb2f8 = CONCAT13(*(undefined *)param_1,_DAT_003fb2f9);
        *_DAT_003fb2ec = _DAT_003fb2f8;
        if (2 < (int)param_2) {
          *(undefined *)(_DAT_003fb2ec + 1) = *(undefined *)((int)param_1 + 2);
        }
      }
      else {
        *(undefined *)_DAT_003fb2ec = *(undefined *)param_1;
        if ((int)param_2 < 3) {
          *(undefined *)((int)_DAT_003fb2ec + 1) = *(undefined *)((int)param_1 + 1);
        }
        else {
          _DAT_003fb2f9 = CONCAT12(*(undefined *)((int)param_1 + 2),_DAT_003fb2fa);
          _DAT_003fb2f8 = CONCAT13(*(undefined *)((int)param_1 + 1),_DAT_003fb2f9);
          *(undefined2 *)((int)_DAT_003fb2ec + 1) = _DAT_003fb2f8;
        }
      }
      param_1 = (undefined4 *)((int)param_1 + param_2);
    }
    if (-1 < (int)puVar3 - (int)puVar4) {
      puVar2 = param_1 + -1;
      do {
        param_1 = puVar2;
        puVar2 = param_1 + 1;
        _DAT_003fb2f8 = *puVar2;
        *puVar4 = _DAT_003fb2f8;
        puVar4 = puVar4 + 1;
      } while (-1 < (int)puVar3 - (int)puVar4);
      param_1 = param_1 + 2;
    }
    uVar1 = (int)puVar4 - (int)puVar3 & 0xff;
    if (uVar1 < 4) {
      if (uVar1 < 3) {
        _DAT_003fb2f9 = CONCAT12(*(undefined *)((int)param_1 + 1),_DAT_003fb2fa);
        _DAT_003fb2f8 = CONCAT13(*(undefined *)param_1,_DAT_003fb2f9);
        *(undefined2 *)puVar4 = _DAT_003fb2f8;
        if (uVar1 < 2) {
          *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)param_1 + 2);
        }
      }
      else {
        *(undefined *)puVar4 = *(undefined *)param_1;
      }
    }
  }
  else if (param_3 == 0x11) {
    if (0 < (int)param_2) {
      uVar1 = (uint)_DAT_003fb2ec & 3;
      _DAT_003fb2f8 = puVar4[-1];
      *(undefined *)param_1 = (&DAT_003fb2f8)[uVar1];
      if ((1 < (int)param_2) &&
         (*(undefined *)((int)param_1 + 1) = (&DAT_003fb2f9)[uVar1], 2 < (int)param_2)) {
        *(undefined *)((int)param_1 + 2) = (&DAT_003fb2fa)[uVar1];
      }
      param_1 = (undefined4 *)((int)param_1 + param_2);
    }
    if (-1 < (int)puVar3 - (int)puVar4) {
      puVar2 = param_1 + -1;
      do {
        param_1 = puVar2;
        DAT_003fb2f8 = (undefined)((uint)*puVar4 >> 0x18);
        uVar5 = *puVar4;
        *(undefined *)(param_1 + 1) = DAT_003fb2f8;
        _DAT_003fb2f8 = uVar5;
        *(undefined *)((int)param_1 + 5) = DAT_003fb2f9;
        *(undefined *)((int)param_1 + 6) = DAT_003fb2fa;
        *(undefined *)((int)param_1 + 7) = DAT_003fb2fb;
        puVar4 = puVar4 + 1;
        puVar2 = param_1 + 1;
      } while (-1 < (int)puVar3 - (int)puVar4);
      param_1 = param_1 + 2;
    }
    uVar1 = (int)puVar4 - (int)puVar3 & 0xff;
    if (uVar1 < 4) {
      DAT_003fb2f8 = (undefined)((uint)*puVar4 >> 0x18);
      uVar5 = *puVar4;
      *(undefined *)param_1 = DAT_003fb2f8;
      _DAT_003fb2f8 = uVar5;
      if (uVar1 < 3) {
        *(undefined *)((int)param_1 + 1) = DAT_003fb2f9;
        if (uVar1 < 2) {
          *(undefined *)((int)param_1 + 2) = DAT_003fb2fa;
        }
      }
    }
  }
  else if (param_3 == 0x22) {
    if (0 < (int)param_2) {
      uVar1 = (uint)_DAT_003fb2ec & 3;
      _DAT_003fb2f8 = puVar4[-1];
      (&DAT_003fb2f8)[uVar1] = *(undefined *)param_1;
      if ((1 < (int)param_2) &&
         ((&DAT_003fb2f9)[uVar1] = *(undefined *)((int)param_1 + 1), 2 < (int)param_2)) {
        (&DAT_003fb2fa)[uVar1] = *(undefined *)((int)param_1 + 2);
      }
      puVar4[-1] = _DAT_003fb2f8;
      param_1 = (undefined4 *)((int)param_1 + param_2);
    }
    if (-1 < (int)puVar3 - (int)puVar4) {
      puVar2 = param_1 + -1;
      do {
        param_1 = puVar2;
        puVar2 = param_1 + 1;
        _DAT_003fb2f8 = *puVar2;
        *puVar4 = _DAT_003fb2f8;
        puVar4 = puVar4 + 1;
      } while (-1 < (int)puVar3 - (int)puVar4);
      param_1 = param_1 + 2;
    }
    uVar1 = (int)puVar4 - (int)puVar3 & 0xff;
    if (uVar1 < 4) {
      uVar5 = *puVar4;
      _DAT_003fb2f9 = (undefined3)uVar5;
      _DAT_003fb2f8 = CONCAT13(*(undefined *)param_1,_DAT_003fb2f9);
      if (uVar1 < 3) {
        _DAT_003fb2fa = (undefined2)uVar5;
        _DAT_003fb2f9 = CONCAT12(*(undefined *)((int)param_1 + 1),_DAT_003fb2fa);
        _DAT_003fb2f8 = CONCAT13(*(undefined *)param_1,_DAT_003fb2f9);
        if (uVar1 < 2) {
          DAT_003fb2fb = (undefined)uVar5;
          _DAT_003fb2fa = CONCAT11(*(undefined *)((int)param_1 + 2),DAT_003fb2fb);
        }
      }
      *puVar4 = _DAT_003fb2f8;
    }
  }
  return;
}

