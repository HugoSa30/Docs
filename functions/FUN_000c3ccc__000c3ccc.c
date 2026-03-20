/*
 * Program: n42.bin
 * Function: FUN_000c3ccc
 * Entry: 000c3ccc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c3ccc(uint param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)ignFadeStatBits;
  uVar1 = 1 << (param_1 & 0x3f);
  ignFadeStatBits = ignFadeStatBits | (byte)uVar1;
  if ((uVar2 | uVar1 & 0xff) != 0) {
    kt_zuen_fdReq_u16 = 0x9a9a;
  }
  (&kt_zuen_fdPatArray_u8)[param_1] = param_2 | (&kt_zuen_fdPatArray_u8)[param_1];
  FUN_000c3c74();
  return;
}

