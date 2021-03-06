/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPCTTypesetterCache : NSObject {
    struct map<unsigned int, boost::shared_ptr<TSWPParagraphTypesetter>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, boost::shared_ptr<TSWPParagraphTypesetter> > > > { 
        struct __tree<std::__1::__value_type<unsigned int, boost::shared_ptr<TSWPParagraphTypesetter> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, boost::shared_ptr<TSWPParagraphTypesetter> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, boost::shared_ptr<TSWPParagraphTypesetter> > > > { 
            struct __tree_node<std::__1::__value_type<unsigned int, boost::shared_ptr<TSWPParagraphTypesetter> >, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, boost::shared_ptr<TSWPParagraphTypesetter> >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, boost::shared_ptr<TSWPParagraphTypesetter> >, std::__1::less<unsigned int>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    } _typesetters;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addTypesetterForParagraphIdentifier:(unsigned int)arg1 typesetter:(struct shared_ptr<TSWPParagraphTypesetter> { struct TSWPParagraphTypesetter {} *x1; struct shared_count { struct sp_counted_base {} *x_2_1_1; } x2; })arg2;
- (struct shared_ptr<TSWPParagraphTypesetter> { struct TSWPParagraphTypesetter {} *x1; struct shared_count { struct sp_counted_base {} *x_2_1_1; } x2; })cachedTypesetterForParagraphIdentifier:(unsigned int)arg1;
- (void)clearCache;
- (void)dealloc;
- (void)p_limitCacheSize:(unsigned int)arg1;
- (void)removeTypesetterForParagraphIndex:(unsigned int)arg1;

@end
