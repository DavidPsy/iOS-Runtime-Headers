/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface CHDCategoryAxis : CHDAxis 
{

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mAutomatic;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mNoMultipleLevelLabel;

    NSInteger mLabelAlignment;
    NSInteger mLabelFrequency;
}


- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isAutomatic;
     /* Encoded args for previous method: B8@0:4 */

- (void)setAutomatic:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isNoMultipleLabellevel;
     /* Encoded args for previous method: B8@0:4 */

- (void)setNoMultipleLevelLabel:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (NSInteger)labelAlignment;
- (NSInteger)labelFrequency;
- (void)adjustAxisPositionForHorizontalChart;
- (void)setLabelFrequency:(NSInteger)arg1;
- (void)setLabelAlignment:(NSInteger)arg1;
- (id)initWithResources:(id)arg1;

@end