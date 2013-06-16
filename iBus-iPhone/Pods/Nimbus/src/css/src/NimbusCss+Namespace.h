//
// Copyright 2011 Jeff Verkoeyen
// This file has been automatically generated by Nimbus' namespacing script.
//
// Licensed under the Apache License, Version 2.0 (the License);
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef __NIMBUS_NAMESPACE_PREFIX_
#error You must define __NIMBUS_NAMESPACE_PREFIX_ in your project settings in order to use a Nimbus namespace.
#else

#ifndef __NIMBUS_NS_SYMBOL
// We need to have multiple levels of macros here so that __NIMBUS_NAMESPACE_PREFIX_ is
// properly replaced by the time we concatenate the namespace prefix.
#define __NIMBUS_NS_REWRITE(ns, symbol) ns ## _ ## symbol
#define __NIMBUS_NS_BRIDGE(ns, symbol) __NIMBUS_NS_REWRITE(ns, symbol)
#define __NIMBUS_NS_SYMBOL(symbol) __NIMBUS_NS_BRIDGE(__NIMBUS_NAMESPACE_PREFIX_, symbol)
#endif

// Classes
#ifndef AFHTTPClient
#define AFHTTPClient __NIMBUS_NS_SYMBOL(AFHTTPClient)
#endif
#ifndef AFHTTPRequestOperation
#define AFHTTPRequestOperation __NIMBUS_NS_SYMBOL(AFHTTPRequestOperation)
#endif
#ifndef AFImageCache
#define AFImageCache __NIMBUS_NS_SYMBOL(AFImageCache)
#endif
#ifndef AFImageRequestOperation
#define AFImageRequestOperation __NIMBUS_NS_SYMBOL(AFImageRequestOperation)
#endif
#ifndef AFJSONRequestOperation
#define AFJSONRequestOperation __NIMBUS_NS_SYMBOL(AFJSONRequestOperation)
#endif
#ifndef AFMultipartFormData
#define AFMultipartFormData __NIMBUS_NS_SYMBOL(AFMultipartFormData)
#endif
#ifndef AFNetworkActivityIndicatorManager
#define AFNetworkActivityIndicatorManager __NIMBUS_NS_SYMBOL(AFNetworkActivityIndicatorManager)
#endif
#ifndef AFPropertyListRequestOperation
#define AFPropertyListRequestOperation __NIMBUS_NS_SYMBOL(AFPropertyListRequestOperation)
#endif
#ifndef AFQueryStringComponent
#define AFQueryStringComponent __NIMBUS_NS_SYMBOL(AFQueryStringComponent)
#endif
#ifndef AFURLConnectionOperation
#define AFURLConnectionOperation __NIMBUS_NS_SYMBOL(AFURLConnectionOperation)
#endif
#ifndef AFXMLRequestOperation
#define AFXMLRequestOperation __NIMBUS_NS_SYMBOL(AFXMLRequestOperation)
#endif
#ifndef NICSSParser
#define NICSSParser __NIMBUS_NS_SYMBOL(NICSSParser)
#endif
#ifndef NICSSRuleset
#define NICSSRuleset __NIMBUS_NS_SYMBOL(NICSSRuleset)
#endif
#ifndef NIChameleonObserver
#define NIChameleonObserver __NIMBUS_NS_SYMBOL(NIChameleonObserver)
#endif
#ifndef NIDOM
#define NIDOM __NIMBUS_NS_SYMBOL(NIDOM)
#endif
#ifndef NILinkedList
#define NILinkedList __NIMBUS_NS_SYMBOL(NILinkedList)
#endif
#ifndef NIStylesheet
#define NIStylesheet __NIMBUS_NS_SYMBOL(NIStylesheet)
#endif
#ifndef NIStylesheetCache
#define NIStylesheetCache __NIMBUS_NS_SYMBOL(NIStylesheetCache)
#endif
#ifndef NI_FIX_CATEGORY_BUG_UIActivityIndicatorView_NIStyleable
#define NI_FIX_CATEGORY_BUG_UIActivityIndicatorView_NIStyleable __NIMBUS_NS_SYMBOL(NI_FIX_CATEGORY_BUG_UIActivityIndicatorView_NIStyleable)
#endif
#ifndef NI_FIX_CATEGORY_BUG_UIButton_NIStyleable
#define NI_FIX_CATEGORY_BUG_UIButton_NIStyleable __NIMBUS_NS_SYMBOL(NI_FIX_CATEGORY_BUG_UIButton_NIStyleable)
#endif
#ifndef NI_FIX_CATEGORY_BUG_UILabel_NIStyleable
#define NI_FIX_CATEGORY_BUG_UILabel_NIStyleable __NIMBUS_NS_SYMBOL(NI_FIX_CATEGORY_BUG_UILabel_NIStyleable)
#endif
#ifndef NI_FIX_CATEGORY_BUG_UINavigationBar_NIStyleable
#define NI_FIX_CATEGORY_BUG_UINavigationBar_NIStyleable __NIMBUS_NS_SYMBOL(NI_FIX_CATEGORY_BUG_UINavigationBar_NIStyleable)
#endif
#ifndef NI_FIX_CATEGORY_BUG_UIScrollView_NIStyleable
#define NI_FIX_CATEGORY_BUG_UIScrollView_NIStyleable __NIMBUS_NS_SYMBOL(NI_FIX_CATEGORY_BUG_UIScrollView_NIStyleable)
#endif
#ifndef NI_FIX_CATEGORY_BUG_UISearchBar_NIStyleable
#define NI_FIX_CATEGORY_BUG_UISearchBar_NIStyleable __NIMBUS_NS_SYMBOL(NI_FIX_CATEGORY_BUG_UISearchBar_NIStyleable)
#endif
#ifndef NI_FIX_CATEGORY_BUG_UITableView_NIStyleable
#define NI_FIX_CATEGORY_BUG_UITableView_NIStyleable __NIMBUS_NS_SYMBOL(NI_FIX_CATEGORY_BUG_UITableView_NIStyleable)
#endif
#ifndef NI_FIX_CATEGORY_BUG_UIToolbar_NIStyleable
#define NI_FIX_CATEGORY_BUG_UIToolbar_NIStyleable __NIMBUS_NS_SYMBOL(NI_FIX_CATEGORY_BUG_UIToolbar_NIStyleable)
#endif
#ifndef NI_FIX_CATEGORY_BUG_UIView_NIStyleable
#define NI_FIX_CATEGORY_BUG_UIView_NIStyleable __NIMBUS_NS_SYMBOL(NI_FIX_CATEGORY_BUG_UIView_NIStyleable)
#endif
// Functions
#ifndef AFContentTypesFromHTTPHeader
#define AFContentTypesFromHTTPHeader __NIMBUS_NS_SYMBOL(AFContentTypesFromHTTPHeader)
#endif
#ifndef AFJSONEncode
#define AFJSONEncode __NIMBUS_NS_SYMBOL(AFJSONEncode)
#endif
#ifndef AFURLEncodedStringFromStringWithEncoding
#define AFURLEncodedStringFromStringWithEncoding __NIMBUS_NS_SYMBOL(AFURLEncodedStringFromStringWithEncoding)
#endif
#ifndef cssConsume
#define cssConsume __NIMBUS_NS_SYMBOL(cssConsume)
#endif
#ifndef csslex
#define csslex __NIMBUS_NS_SYMBOL(csslex)
#endif
#ifndef AFCreateIncompleteDownloadDirectoryPath
#define AFCreateIncompleteDownloadDirectoryPath __NIMBUS_NS_SYMBOL(AFCreateIncompleteDownloadDirectoryPath)
#endif
#ifndef AFQueryStringFromParametersWithEncoding
#define AFQueryStringFromParametersWithEncoding __NIMBUS_NS_SYMBOL(AFQueryStringFromParametersWithEncoding)
#endif
#ifndef AFQueryStringComponentsFromKeyAndValue
#define AFQueryStringComponentsFromKeyAndValue __NIMBUS_NS_SYMBOL(AFQueryStringComponentsFromKeyAndValue)
#endif
#ifndef AFQueryStringComponentsFromKeyAndDictionaryValue
#define AFQueryStringComponentsFromKeyAndDictionaryValue __NIMBUS_NS_SYMBOL(AFQueryStringComponentsFromKeyAndDictionaryValue)
#endif
#ifndef AFQueryStringComponentsFromKeyAndArrayValue
#define AFQueryStringComponentsFromKeyAndArrayValue __NIMBUS_NS_SYMBOL(AFQueryStringComponentsFromKeyAndArrayValue)
#endif
#ifndef AFJSONDecode
#define AFJSONDecode __NIMBUS_NS_SYMBOL(AFJSONDecode)
#endif
#ifndef css_create_buffer
#define css_create_buffer __NIMBUS_NS_SYMBOL(css_create_buffer)
#endif
#ifndef csswrap
#define csswrap __NIMBUS_NS_SYMBOL(csswrap)
#endif
#ifndef cssrestart
#define cssrestart __NIMBUS_NS_SYMBOL(cssrestart)
#endif
#ifndef css_switch_to_buffer
#define css_switch_to_buffer __NIMBUS_NS_SYMBOL(css_switch_to_buffer)
#endif
#ifndef cssalloc
#define cssalloc __NIMBUS_NS_SYMBOL(cssalloc)
#endif
#ifndef css_delete_buffer
#define css_delete_buffer __NIMBUS_NS_SYMBOL(css_delete_buffer)
#endif
#ifndef cssfree
#define cssfree __NIMBUS_NS_SYMBOL(cssfree)
#endif
#ifndef css_flush_buffer
#define css_flush_buffer __NIMBUS_NS_SYMBOL(css_flush_buffer)
#endif
#ifndef csspush_buffer_state
#define csspush_buffer_state __NIMBUS_NS_SYMBOL(csspush_buffer_state)
#endif
#ifndef csspop_buffer_state
#define csspop_buffer_state __NIMBUS_NS_SYMBOL(csspop_buffer_state)
#endif
#ifndef css_scan_buffer
#define css_scan_buffer __NIMBUS_NS_SYMBOL(css_scan_buffer)
#endif
#ifndef css_scan_string
#define css_scan_string __NIMBUS_NS_SYMBOL(css_scan_string)
#endif
#ifndef css_scan_bytes
#define css_scan_bytes __NIMBUS_NS_SYMBOL(css_scan_bytes)
#endif
#ifndef cssget_lineno
#define cssget_lineno __NIMBUS_NS_SYMBOL(cssget_lineno)
#endif
#ifndef cssget_in
#define cssget_in __NIMBUS_NS_SYMBOL(cssget_in)
#endif
#ifndef cssget_out
#define cssget_out __NIMBUS_NS_SYMBOL(cssget_out)
#endif
#ifndef cssget_leng
#define cssget_leng __NIMBUS_NS_SYMBOL(cssget_leng)
#endif
#ifndef cssget_text
#define cssget_text __NIMBUS_NS_SYMBOL(cssget_text)
#endif
#ifndef cssset_lineno
#define cssset_lineno __NIMBUS_NS_SYMBOL(cssset_lineno)
#endif
#ifndef cssset_in
#define cssset_in __NIMBUS_NS_SYMBOL(cssset_in)
#endif
#ifndef cssset_out
#define cssset_out __NIMBUS_NS_SYMBOL(cssset_out)
#endif
#ifndef cssget_debug
#define cssget_debug __NIMBUS_NS_SYMBOL(cssget_debug)
#endif
#ifndef cssset_debug
#define cssset_debug __NIMBUS_NS_SYMBOL(cssset_debug)
#endif
#ifndef csslex_destroy
#define csslex_destroy __NIMBUS_NS_SYMBOL(csslex_destroy)
#endif
#ifndef cssrealloc
#define cssrealloc __NIMBUS_NS_SYMBOL(cssrealloc)
#endif
// Externs
#ifndef cssnames
#define cssnames __NIMBUS_NS_SYMBOL(cssnames)
#endif
#ifndef csslineno
#define csslineno __NIMBUS_NS_SYMBOL(csslineno)
#endif
#ifndef kPropertyOrderKey
#define kPropertyOrderKey __NIMBUS_NS_SYMBOL(kPropertyOrderKey)
#endif
#ifndef kDependenciesSelectorKey
#define kDependenciesSelectorKey __NIMBUS_NS_SYMBOL(kDependenciesSelectorKey)
#endif
#ifndef gActiveParser
#define gActiveParser __NIMBUS_NS_SYMBOL(gActiveParser)
#endif
#ifndef kAFNetworkingIncompleteDownloadDirectoryName
#define kAFNetworkingIncompleteDownloadDirectoryName __NIMBUS_NS_SYMBOL(kAFNetworkingIncompleteDownloadDirectoryName)
#endif
#ifndef cssin
#define cssin __NIMBUS_NS_SYMBOL(cssin)
#endif
#ifndef cssout
#define cssout __NIMBUS_NS_SYMBOL(cssout)
#endif
#ifndef css_flex_debug
#define css_flex_debug __NIMBUS_NS_SYMBOL(css_flex_debug)
#endif
#ifndef AFNetworkingReachabilityDidChangeNotification
#define AFNetworkingReachabilityDidChangeNotification __NIMBUS_NS_SYMBOL(AFNetworkingReachabilityDidChangeNotification)
#endif
#ifndef NIStylesheetDidChangeNotification
#define NIStylesheetDidChangeNotification __NIMBUS_NS_SYMBOL(NIStylesheetDidChangeNotification)
#endif
#ifndef AFNetworkingErrorDomain
#define AFNetworkingErrorDomain __NIMBUS_NS_SYMBOL(AFNetworkingErrorDomain)
#endif
#ifndef AFNetworkingOperationDidStartNotification
#define AFNetworkingOperationDidStartNotification __NIMBUS_NS_SYMBOL(AFNetworkingOperationDidStartNotification)
#endif
#ifndef AFNetworkingOperationDidFinishNotification
#define AFNetworkingOperationDidFinishNotification __NIMBUS_NS_SYMBOL(AFNetworkingOperationDidFinishNotification)
#endif
#endif