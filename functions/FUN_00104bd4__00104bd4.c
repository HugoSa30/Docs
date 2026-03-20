/*
 * Program: n42.bin
 * Function: FUN_00104bd4
 * Entry: 00104bd4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00104bd4(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint local_28;
  int local_24;
  
  if (param_3 == (undefined4 *)0x0) {
    local_28 = 0;
    if (param_2 != 0) {
      do {
        (&UNK_003f9d40)[_DAT_003f9d38] = *(undefined *)(param_1 + local_28);
        _DAT_003f9d38 = _DAT_003f9d38 + 1;
        if (_DAT_003f9d38 == 0x40) {
          _();
          FUN_001049a8();
        }
        local_28 = local_28 + 1;
      } while (local_28 < param_2);
    }
    _DAT_003f9d3c = _DAT_003f9d3c + param_2;
  }
  else {
    if (*(char *)param_3 == '\0') {
      local_28 = 0;
      *(char *)(param_3 + 3) = '\0';
    }
    else {
      local_30 = *param_3;
      uStack_2c = param_3[1];
      local_28 = param_3[2];
    }
    local_24 = 0;
    if (local_28 < param_2) {
      puVar2 = (undefined *)(param_1 + local_28 + -1);
      do {
        puVar2 = puVar2 + 1;
        (&UNK_003f9d40)[_DAT_003f9d38] = *puVar2;
        _DAT_003f9d38 = _DAT_003f9d38 + 1;
        if (_DAT_003f9d38 == 0x40) {
          local_24 = local_24 + 1;
          _();
          FUN_001049a8();
          if ((((local_24 == 10) || (local_28 + 1 == param_2)) &&
              (local_24 = 0, param_3 != (undefined4 *)0x0)) && (iVar1 = FUN_001268c4(), iVar1 != 0))
          {
            local_30 = CONCAT13(1,local_30._1_3_);
            *param_3 = local_30;
            param_3[1] = uStack_2c;
            param_3[2] = local_28 + 1;
            return 1;
          }
        }
        local_28 = local_28 + 1;
      } while (local_28 < param_2);
    }
    _DAT_003f9d3c = _DAT_003f9d3c + param_2;
    if (*(char *)param_3 != '\0') {
      *(char *)param_3 = '\0';
    }
  }
  return 0;
}

