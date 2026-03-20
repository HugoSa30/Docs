/*
 * Program: n42.bin
 * Function: FUN_000f61d0
 * Entry: 000f61d0
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000f61d0(int param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char local_18 [16];
  
  cVar1 = (*(code *)&SUB_00065aac)(local_18,param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  param_1 = param_1 * 0x70;
  if ((&UNK_003fc3f9)[param_1] == -1) {
    (&UNK_003fc3f9)[param_1] = local_18[0];
    (&UNK_003fc3fa)[param_1] = local_18[0];
  }
  cVar1 = (&UNK_003fc3fa)[param_1];
  if (cVar1 == '\x01') {
    if (DAT_003fc5bb < (byte)(&UNK_003fc3e8)[(uint)(byte)(&UNK_003fc3f8)[param_1] + param_1 + 8]) {
      (*(code *)&SUB_00fad9ec)((int)(short)DAT_003fc5c9);
      DAT_003fc5bf = 0;
      DAT_003fc5be = 0;
      (*(code *)&SUB_00fb2c44)
                (0x47,(&UNK_003fc3e8)[(uint)(byte)(&UNK_003fc3f8)[param_1] + param_1 + 8]);
      return 0;
    }
  }
  else if (DAT_003fc5b9 < (byte)(&UNK_003fc3e8)[(uint)(byte)(&UNK_003fc3f8)[param_1] + param_1 + 8])
  {
    (*(code *)&SUB_00fad9ec)((int)(short)DAT_003fc5c9);
    DAT_003fc5bf = 0;
    DAT_003fc5be = 0;
    (*(code *)&SUB_00fb2c44)
              (0x49,(&UNK_003fc3e8)[(uint)(byte)(&UNK_003fc3f8)[param_1] + param_1 + 8]);
    return 0;
  }
  if (cVar1 != local_18[0]) {
    if (cVar1 == '\x01') {
      if (((byte)(&UNK_003fc3f8)[param_1] != 0) &&
         ((byte)(&UNK_003fc3e8)[(uint)(byte)(&UNK_003fc3f8)[param_1] + param_1 + 8] < DAT_003fc5bc))
      {
        (*(code *)&SUB_00fad9ec)((int)(short)DAT_003fc5c9);
        DAT_003fc5bf = 0;
        DAT_003fc5be = 0;
        (*(code *)&SUB_00fb2c44)
                  (0x48,(&UNK_003fc3e8)[(uint)(byte)(&UNK_003fc3f8)[param_1] + param_1 + 8]);
        return 1;
      }
    }
    else if (((byte)(&UNK_003fc3f8)[param_1] != 0) &&
            ((byte)(&UNK_003fc3e8)[(uint)(byte)(&UNK_003fc3f8)[param_1] + param_1 + 8] <
             DAT_003fc5ba)) {
      (*(code *)&SUB_00fad9ec)((int)(short)DAT_003fc5c9);
      DAT_003fc5bf = 0;
      DAT_003fc5be = 0;
      (*(code *)&SUB_00fb2c44)
                (0x4a,(&UNK_003fc3e8)[(uint)(byte)(&UNK_003fc3f8)[param_1] + param_1 + 8]);
      return 0;
    }
    bVar2 = (&UNK_003fc3f8)[param_1] + 1;
    (&UNK_003fc3f8)[param_1] = bVar2;
    (&UNK_003fc3fa)[param_1] = local_18[0];
    if (7 < bVar2) {
      (*(code *)&SUB_00fad9ec)((int)(short)DAT_003fc5c9);
      DAT_003fc5bf = 0;
      DAT_003fc5be = 0;
      (*(code *)&SUB_00fb2c44)(0x46,0);
      return 0;
    }
    if (DAT_003fc5c0 < bVar2) {
      (*(code *)&SUB_00fad9ec)((int)(short)DAT_003fc5c9);
      DAT_003fc5bf = 0;
      DAT_003fc5be = 0;
      (*(code *)&SUB_00fb2c44)(0x4c,(&UNK_003fc3f8)[param_1]);
      return 0;
    }
  }
  pcVar3 = &UNK_003fc3e8 + (uint)(byte)(&UNK_003fc3f8)[param_1] + param_1 + 8;
  *pcVar3 = *pcVar3 + '\x01';
  return 1;
}

