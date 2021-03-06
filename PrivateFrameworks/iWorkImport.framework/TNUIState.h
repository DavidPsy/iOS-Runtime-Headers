/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TNUIStateDelegate>, NSArray, NSSet, TNChartSelection, TNSheetSelection, TSTTableSelection, TSURetainedPointerKeyDictionary;

@interface TNUIState : NSObject <NSCopying> {
    TNChartSelection *mChartSelection;
    <TNUIStateDelegate> *mDelegate;
    int mDocumentMode;
    TSURetainedPointerKeyDictionary *mEditModeSheetUIStates;
    int mInspectorPaneViewMode;
    BOOL mInspectorPaneVisible;
    BOOL mRemovedAllQuickCalcFunctions;
    NSSet *mSelectedInfos;
    NSArray *mSelectedQuickCalcFunctions;
    TNSheetSelection *mSheetSelection;
    TSURetainedPointerKeyDictionary *mSheetUIStates;
    BOOL mShowCanvasGuides;
    BOOL mShowsComments;
    int mTableEditingMode;
    TSTTableSelection *mTableSelection;
}

@property(retain) TNChartSelection * chartSelection;
@property <TNUIStateDelegate> * delegate;
@property int documentMode;
@property unsigned char formFocusedFieldIndex;
@property unsigned short formFocusedRecordIndex;
@property(readonly) BOOL hasPreviousVisibleRect;
@property(readonly) BOOL hasVisibleRect;
@property int inspectorPaneViewMode;
@property(getter=isInspectorPaneVisible) BOOL inspectorPaneVisible;
@property(readonly) struct CGPoint { float x1; float x2; } previousScrollPosition;
@property(readonly) float previousViewScale;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } previousVisibleRect;
@property BOOL removedAllQuickCalcFunctions;
@property(readonly) struct CGPoint { float x1; float x2; } scrollPosition;
@property(retain) NSSet * selectedInfos;
@property(copy) NSArray * selectedQuickCalcFunctions;
@property(retain) TNSheetSelection * sheetSelection;
@property BOOL showCanvasGuides;
@property BOOL showsComments;
@property int tableEditingMode;
@property(retain) TSTTableSelection * tableSelection;
@property(readonly) float viewScale;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleRect;

- (id)archivedUIStateInContext:(id)arg1;
- (id)chartSelection;
- (void)clearPreviousVisibleRect;
- (void)clearVisibleRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)documentMode;
- (unsigned char)formFocusedFieldIndex;
- (unsigned short)formFocusedRecordIndex;
- (BOOL)hasPreviousVisibleRect;
- (BOOL)hasVisibleRect;
- (unsigned int)hash;
- (id)init;
- (id)initWithArchive:(const struct UIStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSP::Reference> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; unsigned int x5; unsigned int x6; struct SelectionArchive {} *x7; struct RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; int x9; int x10; unsigned int x11; unsigned int x12; struct ChartSelectionArchive {} *x13; struct Reference {} *x14; int x15; boolx16; boolx17; boolx18; boolx19; struct RepeatedField<unsigned int> { unsigned int *x_20_1_1; int x_20_1_2; int x_20_1_3; } x20; boolx21; int x22; unsigned int x23[1]; }*)arg1 unarchiver:(id)arg2;
- (int)inspectorPaneViewMode;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInspectorPaneVisible;
- (float)p_calculateViewScaleForVisibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)p_enterPaginatedMode;
- (void)p_exitPaginatedMode;
- (struct CGPoint { float x1; float x2; })previousScrollPosition;
- (float)previousViewScale;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previousVisibleRect;
- (void)removeUIStateForSheet:(id)arg1;
- (BOOL)removedAllQuickCalcFunctions;
- (void)saveToArchive:(struct UIStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSP::Reference> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; unsigned int x5; unsigned int x6; struct SelectionArchive {} *x7; struct RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; int x9; int x10; unsigned int x11; unsigned int x12; struct ChartSelectionArchive {} *x13; struct Reference {} *x14; int x15; boolx16; boolx17; boolx18; boolx19; struct RepeatedField<unsigned int> { unsigned int *x_20_1_1; int x_20_1_2; int x_20_1_3; } x20; boolx21; int x22; unsigned int x23[1]; }*)arg1 archiver:(id)arg2 context:(id)arg3;
- (struct CGPoint { float x1; float x2; })scrollPosition;
- (id)selectedInfos;
- (id)selectedQuickCalcFunctions;
- (void)setChartSelection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentMode:(int)arg1;
- (void)setFormFocusedFieldIndex:(unsigned char)arg1;
- (void)setFormFocusedRecordIndex:(unsigned short)arg1;
- (void)setInspectorPaneViewMode:(int)arg1;
- (void)setInspectorPaneVisible:(BOOL)arg1;
- (void)setPreviousVisibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSheet:(id)arg2;
- (void)setPreviousVisibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRemovedAllQuickCalcFunctions:(BOOL)arg1;
- (void)setSelectedInfos:(id)arg1;
- (void)setSelectedQuickCalcFunctions:(id)arg1;
- (void)setSheetSelection:(id)arg1;
- (void)setShowCanvasGuides:(BOOL)arg1;
- (void)setShowsComments:(BOOL)arg1;
- (void)setTableEditingMode:(int)arg1;
- (void)setTableSelection:(id)arg1;
- (void)setUIState:(id)arg1 forSheet:(id)arg2;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSheet:(id)arg2;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)sheetSelection;
- (BOOL)showCanvasGuides;
- (BOOL)showsComments;
- (int)tableEditingMode;
- (id)tableSelection;
- (id)uiStateForSheet:(id)arg1;
- (float)viewScale;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;

@end
