/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSIndexSet;



@interface UIGroupDeletionItem : NSObject 
{
    NSUInteger _lastIndex;
    NSInteger _group;
    NSIndexSet *_indexes;
}


- (id)initWithGroup:(NSInteger)arg1;
- (id)initWithGroup:(NSInteger)arg1 andIndexes:(id)arg2;
- (id)initWithIndexes:(id)arg1 inGroup:(NSInteger)arg2;
- (NSInteger)group;
- (id)indexes;
- (NSUInteger)lastIndex;
- (void)setLastIndex:(NSUInteger)arg1;
- (void)dealloc;

@end