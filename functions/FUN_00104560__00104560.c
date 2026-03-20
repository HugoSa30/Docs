/*
 * Program: n42.bin
 * Function: FUN_00104560
 * Entry: 00104560
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00104560(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5,
            undefined4 *param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_20;
  
  local_34 = _DAT_00f0490c;
  local_30 = _DAT_00f04910;
  local_2c = _DAT_00f04914;
  local_20 = param_6;
  if (param_6 == (undefined4 *)0x0) {
    if (0x10 < *param_5) {
      return 0xffffffff;
    }
    local_40 = param_2;
    local_3c = param_3;
    local_38 = param_1;
    FUN_00104f20(3,&local_40,&local_34,&UNK_003f9d90,0);
    if (param_4 < 4) {
      if (param_4 == 3) {
        uVar2 = FUN_0010518c(&UNK_003f9d90,param_5,0xf054fc,0xf05544,0);
        return uVar2;
      }
      if (param_4 == 1) {
        uVar2 = FUN_0010518c(&UNK_003f9d90,param_5,0xf0545c,0xf054a4,0);
        return uVar2;
      }
      if (param_4 == 2) {
        uVar2 = FUN_0010518c(&UNK_003f9d90,param_5,0xf054ac,0xf054f4,0);
        return uVar2;
      }
    }
    else {
      if (param_4 == 4) {
        uVar2 = FUN_0010518c(&UNK_003f9d90,param_5,0xf0554c,0xf05594,0);
        return uVar2;
      }
      if (param_4 == 5) {
        uVar2 = FUN_0010518c(&UNK_003f9d90,param_5,0xf0559c,0xf055e4,0);
        return uVar2;
      }
    }
    return 0xfffffffe;
  }
  puVar1 = param_6;
  if (*(char *)param_6 == '\0') {
    if (0x10 < *param_5) {
      return 0xffffffff;
    }
    local_40 = param_2;
    local_3c = param_3;
    local_38 = param_1;
    FUN_00104f20(3,&local_40,&local_34,&UNK_003f9d90,0);
    *(char *)(local_20 + 1) = '\0';
    puVar1 = local_28;
  }
  local_28 = puVar1;
  if (param_4 < 4) {
    if (param_4 == 3) {
      uVar2 = FUN_0010518c(&UNK_003f9d90,param_5,0xf054fc,0xf05544,local_20 + 1);
      goto LAB_0010473c;
    }
    if (param_4 == 1) {
      uVar2 = FUN_0010518c(&UNK_003f9d90,param_5,0xf0545c,0xf054a4,local_20 + 1);
      goto LAB_0010473c;
    }
    if (param_4 == 2) {
      uVar2 = FUN_0010518c(&UNK_003f9d90,param_5,0xf054ac,0xf054f4,local_20 + 1);
      goto LAB_0010473c;
    }
  }
  else {
    if (param_4 == 4) {
      uVar2 = FUN_0010518c(&UNK_003f9d90,param_5,0xf0554c,0xf05594,local_20 + 1);
      goto LAB_0010473c;
    }
    if (param_4 == 5) {
      uVar2 = FUN_0010518c(&UNK_003f9d90,param_5,0xf0559c,0xf055e4,local_20 + 1);
      goto LAB_0010473c;
    }
  }
  uVar2 = 0xfffffffe;
LAB_0010473c:
  if (*(char *)(local_20 + 1) == '\0') {
    *(char *)local_20 = '\0';
  }
  else {
    local_28 = (undefined4 *)CONCAT13(1,local_28._1_3_);
    *local_20 = local_28;
    uVar2 = 1;
  }
  return uVar2;
}

