/*
 * Program: n42.bin
 * Function: FUN_000b2958
 * Entry: 000b2958
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000b2958(int param_1,undefined2 *param_2)

{
  undefined2 local_20 [2];
  undefined2 *local_1c;
  
  local_1c = param_2;
  if ((*(byte *)((int)param_2 + 1) & 1) == 0) {
LAB_000b2a0c:
    if (((&UNK_003fde63)[param_1 * 2] & 1) == 1) {
      local_20[0] = *param_2;
      func_0x00fe646c(param_1,local_20);
      goto LAB_000b2aac;
    }
  }
  else {
    if ((((&UNK_003fde63)[param_1 * 2] & 1) == 0) || ((*(byte *)param_2 >> 4 & 1) == 0)) {
      local_20[0] = *param_2;
      func_0x00fe5f50(param_1,local_20);
      if (((byte)(&UNK_003fde62)[param_1 * 2] >> 4 & 1) != 0) {
        *(byte *)local_1c = *(byte *)local_1c & 0xef | 0x10;
      }
      goto LAB_000b2aac;
    }
    if ((*(byte *)((int)param_2 + 1) & 1) == 0) goto LAB_000b2a0c;
  }
  if (((*(byte *)((int)param_2 + 1) >> 1 & 1) == 1) &&
     (((byte)(&UNK_003fde63)[param_1 * 2] >> 1 & 1) == 0)) {
    func_0x00fe6754(param_1);
  }
  if (((*(byte *)param_2 & 0xf) != ((&UNK_003fde62)[param_1 * 2] & 0xf)) &&
     ((*(byte *)((int)param_2 + 1) & 1) == 1)) {
    local_20[0] = *param_2;
    func_0x00fe6904(param_1,local_20);
  }
LAB_000b2aac:
  *(undefined2 *)(&UNK_003fde62 + param_1 * 2) = *local_1c;
  return;
}

