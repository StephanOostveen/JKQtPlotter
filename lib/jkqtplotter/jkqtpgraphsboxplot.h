/*
    Copyright (c) 2008-2019 Jan W. Krieger (<jan@jkrieger.de>)

    

    This software is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License (LGPL) as published by
    the Free Software Foundation, either version 2.1 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License (LGPL) for more details.

    You should have received a copy of the GNU Lesser General Public License (LGPL)
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include <QString>
#include <QPainter>
#include <QPair>
#include "jkqtplottertools/jkqtptools.h"
#include "jkqtplottertools/jkqtp_imexport.h"
#include "jkqtplottertools/jkqtpimagetools.h"
#include "jkqtplotter/jkqtpgraphsbase.h"
#include "jkqtplotter/jkqtpgraphsbasestylingmixins.h"

#ifndef jkqtpgraphsboxplot_H
#define jkqtpgraphsboxplot_H





/*! \brief Styling Mix-In for Boxplots
    \ingroup jkqtplotter_basegraphs_stylemixins


 */
class JKQTP_LIB_EXPORT JKQTPGraphBoxplotStyleMixin: public JKQTPGraphLineStyleMixin, public JKQTPGraphFillStyleMixin, public JKQTPGraphSymbolStyleMixin {
        Q_GADGET
    public:
        /** \brief class constructor */
        JKQTPGraphBoxplotStyleMixin();

        void initBoxplotStyle(JKQTBasePlotter* parent, int &parentPlotStyle);

        /*! \copydoc boxWidth
            \see see boxWidth for details */
        void setBoxWidth(double __value);
        /*! \copydoc boxWidth
            \see see boxWidth for details */
        double getBoxWidth() const;



        /*! \brief set the line style of whisker lines */
        void setWhiskerLineStyle(Qt::PenStyle  __value);
        /*! \brief get the line style of whisker lines */
        Qt::PenStyle getWhiskerLineStyle() const;

        /*! \brief set the width [pt] of whisker lines */
        void setWhiskerLineWidth(double __value);
        /*! \brief get the  width [pt] of whisker lines */
        double getWhiskerLineWidth() const;

        /*! \brief set the color of whisker lines */
        void setWhiskerLineColor(QColor __value);
        /*! \brief get the color of whisker lines */
        QColor getWhiskerLineColor() const;


        /** \brief sets the dash offset for a custom dash style of whisker lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setDashOffset
         */
        void setWhiskerLineDashOffset(qreal offset);
        /** \brief returns the dash offset for a custom dash style of whisker lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setDashOffset
         */
        qreal getWhiskerLineDashOffset() const;
        /** \brief sets the dash pattern for a custom dash style of whisker lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setDashPattern
         */
        void setWhiskerLineDashPattern(const QVector<qreal> &pattern);
        /** \brief gets the dash pattern for a custom dash style of whisker lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setDashPattern
         */
        QVector<qreal> getWhiskerLineDashPattern() const;
        /** \brief sets the join style of whisker lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setJoinStyle
         */
        void setWhiskerLineJoinStyle(Qt::PenJoinStyle style);
        /** \brief returns the join style of whisker lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setJoinStyle
         */
        Qt::PenJoinStyle getWhiskerLineJoinStyle() const;
        /** \brief sets the cap style of whisker lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setCapStyle
         */
        void setWhiskerLineCapStyle(Qt::PenCapStyle style);
        /** \brief gets the cap style of whisker lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setCapStyle
         */
        Qt::PenCapStyle getWhiskerLineCapStyle() const;
        /** \brief sets the brush used to fill the line area of whisker lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setBrush
         */
        void setWhiskerLineBrush(const QBrush& style);
        /** \brief gets the brush used to fill the line area of whisker lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setBrush
         */
        QBrush getWhiskerLineBrush() const;

        /** \brief build a pen to be used for drawing whiskers */
        QPen getWhiskerPen(JKQTPEnhancedPainter &painter, JKQTBasePlotter *parent) const;







        /*! \brief set the line style of median lines */
        void setMedianLineStyle(Qt::PenStyle  __value);
        /*! \brief get the line style of median lines */
        Qt::PenStyle getMedianLineStyle() const;

        /*! \brief set the width [pt] of median lines */
        void setMedianLineWidth(double __value);
        /*! \brief get the  width [pt] of median lines */
        double getMedianLineWidth() const;

        /*! \brief set the color of median lines */
        void setMedianLineColor(QColor __value);
        /*! \brief get the color of median lines */
        QColor getMedianLineColor() const;


        /** \brief sets the dash offset for a custom dash style of median lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setDashOffset
         */
        void setMedianLineDashOffset(qreal offset);
        /** \brief returns the dash offset for a custom dash style of median lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setDashOffset
         */
        qreal getMedianLineDashOffset() const;
        /** \brief sets the dash pattern for a custom dash style of median lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setDashPattern
         */
        void setMedianLineDashPattern(const QVector<qreal> &pattern);
        /** \brief gets the dash pattern for a custom dash style of median lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setDashPattern
         */
        QVector<qreal> getMedianLineDashPattern() const;
        /** \brief sets the join style of median lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setJoinStyle
         */
        void setMedianLineJoinStyle(Qt::PenJoinStyle style);
        /** \brief returns the join style of median lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setJoinStyle
         */
        Qt::PenJoinStyle getMedianLineJoinStyle() const;
        /** \brief sets the cap style of median lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setCapStyle
         */
        void setMedianLineCapStyle(Qt::PenCapStyle style);
        /** \brief gets the cap style of median lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setCapStyle
         */
        Qt::PenCapStyle getMedianLineCapStyle() const;
        /** \brief sets the brush used to fill the line area of median lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setBrush
         */
        void setMedianLineBrush(const QBrush& style);
        /** \brief gets the brush used to fill the line area of median lines
         *  \see https://doc.qt.io/qt-5/qpen.html#setBrush
         */
        QBrush getMedianLineBrush() const;

        /** \brief build a pen to be used for drawing medians */
        QPen getMedianPen(JKQTPEnhancedPainter &painter, JKQTBasePlotter *parent) const;

    protected:
        /*! \brief set the color of the graph (colors all elements, based on the given color \a c )*/
        void setBoxplotColor(QColor c, JKQTBasePlotter *parent);
    private:
        /** \brief line style of the whisker lines */
        QPen m_whiskerLinePen;
        /** \brief line width (in pt) of the whisker lines */
        double whiskerLineWidth;
        /** \brief line style of the median lines */
        QPen m_medianLinePen;
        /** \brief line width (in pt) of the median lines */
        double medianLineWidth;
        /** \brief width of box in percent of distance between the current two posColumn values
         *         if we only plot one box&whiskers then this is the width in pt */
        double boxWidth;

};






/*! \brief This implements vertical <a href="http://en.wikipedia.org/wiki/Box_plot">boxplots</a>
    \ingroup jkqtplotter_statgraphs

    The x position is given in posColumn. All other data are given in the medianColumn, minColumn, maxColumn,
    percentile25Column and percentile75Column.

    \image html plot_boxplotvertical.png

    The different features of a boxplot are:

    \image html boxplots.png

    This class also implements hitTest() in a way that displays all data of the boxplot in the tooltips:

    \image html tooltip_boxplot.png

    \note There are additional classes to draw a single boxplot element: JKQTPBoxplotHorizontalElement and JKQTPBoxplotVerticalElement.
          In these you can set the data values, as they are NOT drawn from a data column. This can be useful, if you e.g. want to
          draw the statistical properties of a distribution.

    \section BoxplotOutliers Outliers

    If you also want to display outliers, as shown here with circles:

    \image html boxplot_outliers.png

    You need to add them as (x,y)-pairs to the datastore and add a separate JKQTPXYLineGraph that shows these. See \ref JKQTPlotterBoxplotsGraphs for details. Here is an example code-snippet:

    \code
        // 4. create a graph of vertical boxplots:
        JKQTPBoxplotVerticalGraph* graph=new JKQTPBoxplotVerticalGraph(&plot);
        graph->setPositionColumn(columnPOS);
        graph->setMinColumn(columnMIN);
        graph->setPercentile25Column(columnQ25);
        graph->setMedianColumn(columnMEDIAN);
        graph->setMeanColumn(columnMEAN);
        graph->setPercentile75Column(columnQ75);
        graph->setMaxColumn(columnMAX);
        graph->setTitle("vertical Boxplots");

        // 5. outliers need to be drawn separately
        JKQTPXYLineGraph* graphOutliers=new JKQTPXYLineGraph(&plot);
        graphOutliers->setXColumn(columnOUTLIERSX);
        graphOutliers->setYColumn(columnOUTLIERSY);
        graphOutliers->setTitle("outliers");
        // make the color a darker shade of the color of graph
        graphOutliers->setColor(graph->getColor().darker());
        graphOutliers->setFillColor(QColor("white"));
        // draw outliers as small circles, without lines
        graphOutliers->setSymbolType(JKQTPCircle);
        graphOutliers->setDrawLine(false);
        graphOutliers->setSymbolSize(7);
    \endcode

    \see \ref JKQTPlotterBoxplotsGraphs

 */
class JKQTP_LIB_EXPORT JKQTPBoxplotVerticalGraph: public JKQTPGraph, public JKQTPGraphBoxplotStyleMixin {
        Q_OBJECT
    public:

        /** \brief Sortierordnung f�r Daten in einem JKQTPBoxplotVerticalGraph (oder seinen Kindern) */
        enum DataSortOrder {
            Unsorted=0,
            Sorted=1
        };



        /** \brief class constructor */
        JKQTPBoxplotVerticalGraph(JKQTBasePlotter* parent=nullptr);
        /** \brief class constructor */
        JKQTPBoxplotVerticalGraph(JKQTPlotter* parent);

        /** \brief plots the graph to the plotter object specified as parent */
        virtual void draw(JKQTPEnhancedPainter& painter) override;
        /** \brief plots a key marker inside the specified rectangle \a rect */
        virtual void drawKeyMarker(JKQTPEnhancedPainter& painter, QRectF& rect) override;
        /** \brief returns the color to be used for the key label */
        virtual QColor getKeyLabelColor() const override;
        /*! \brief set the color of the graph (colors all elements, based on the given color \a c )*/
        virtual void setColor(QColor c);


        /** \brief get the maximum and minimum x-value of the graph
         *
         * The result is given in the two parameters which are call-by-reference parameters!
         */
        virtual bool getXMinMax(double& minx, double& maxx, double& smallestGreaterZero) override;
        /** \brief get the maximum and minimum y-value of the graph
         *
         * The result is given in the two parameters which are call-by-reference parameters!
         */
        virtual bool getYMinMax(double& miny, double& maxy, double& smallestGreaterZero) override;

        /** \copydoc JKQTPGraph::usesColumn() */
        virtual bool usesColumn(int c) const override;

        /*! \copydoc sortData
            \see see sortData for details */ 
        void setDataSortOrder(DataSortOrder  __value);
        /*! \copydoc sortData
            \see see sortData for details */ 
        DataSortOrder getDataSortOrder() const;
        /*! \brief sets the property sortData ( \copybrief sortData ) to the specified \a __value. \details Description of the parameter sortData is: <BLOCKQUOTE>\copydoc sortData </BLOCKQUOTE> \see sortData for more information */
        void setDataSortOrder(int __value);
        /*! \copydoc posColumn
            \see see posColumn for details */ 
        void setPositionColumn(int __value);
        /*! \copydoc posColumn
            \see see posColumn for details */ 
        int getPositionColumn() const;
        /*! \brief sets the property posColumn ( \copybrief posColumn ) to the specified \a __value, where __value is static_cast'ed from size_t to int. 
            \details Description of the parameter posColumn is:  <BLOCKQUOTE>\copydoc posColumn </BLOCKQUOTE> 
            \see posColumn for more information */ 
        void setPositionColumn (size_t __value);
        /*! \copydoc medianColumn
            \see see medianColumn for details */ 
        void setMedianColumn(int __value);
        /*! \copydoc medianColumn
            \see see medianColumn for details */ 
        int getMedianColumn() const;
        /*! \brief sets the property medianColumn ( \copybrief medianColumn ) to the specified \a __value, where __value is static_cast'ed from size_t to int. 
            \details Description of the parameter medianColumn is:  <BLOCKQUOTE>\copydoc medianColumn </BLOCKQUOTE> 
            \see medianColumn for more information */ 
        void setMedianColumn (size_t __value);
        /*! \copydoc meanColumn
            \see see meanColumn for details */ 
        void setMeanColumn(int __value);
        /*! \copydoc meanColumn
            \see see meanColumn for details */ 
        int getMeanColumn() const;
        /*! \brief sets the property meanColumn ( \copybrief meanColumn ) to the specified \a __value, where __value is static_cast'ed from size_t to int. 
            \details Description of the parameter meanColumn is:  <BLOCKQUOTE>\copydoc meanColumn </BLOCKQUOTE> 
            \see meanColumn for more information */ 
        void setMeanColumn (size_t __value);
        /*! \copydoc minColumn
            \see see minColumn for details */ 
        void setMinColumn(int __value);
        /*! \copydoc minColumn
            \see see minColumn for details */ 
        int getMinColumn() const;
        /*! \brief sets the property minColumn ( \copybrief minColumn ) to the specified \a __value, where __value is static_cast'ed from size_t to int. 
            \details Description of the parameter minColumn is:  <BLOCKQUOTE>\copydoc minColumn </BLOCKQUOTE> 
            \see minColumn for more information */ 
        void setMinColumn( size_t __value);
        /*! \copydoc maxColumn
            \see see maxColumn for details */ 
        void setMaxColumn(int __value);
        /*! \copydoc maxColumn
            \see see maxColumn for details */ 
        int getMaxColumn() const;
        /*! \brief sets the property maxColumn ( \copybrief maxColumn ) to the specified \a __value, where __value is static_cast'ed from size_t to int. 
            \details Description of the parameter maxColumn is:  <BLOCKQUOTE>\copydoc maxColumn </BLOCKQUOTE> 
            \see maxColumn for more information */ 
        void setMaxColumn (size_t __value);
        /*! \copydoc percentile25Column
            \see see percentile25Column for details */ 
        void setPercentile25Column(int __value);
        /*! \copydoc percentile25Column
            \see see percentile25Column for details */ 
        int getPercentile25Column() const;
        /*! \brief sets the property percentile25Column ( \copybrief percentile25Column ) to the specified \a __value, where __value is static_cast'ed from size_t to int. 
            \details Description of the parameter percentile25Column is:  <BLOCKQUOTE>\copydoc percentile25Column </BLOCKQUOTE> 
            \see percentile25Column for more information */ 
        void setPercentile25Column (size_t __value);
        /*! \copydoc percentile75Column
            \see see percentile75Column for details */ 
        void setPercentile75Column(int __value);
        /*! \copydoc percentile75Column
            \see see percentile75Column for details */ 
        int getPercentile75Column() const;
        /*! \brief sets the property percentile75Column ( \copybrief percentile75Column ) to the specified \a __value, where __value is static_cast'ed from size_t to int. 
            \details Description of the parameter percentile75Column is:  <BLOCKQUOTE>\copydoc percentile75Column </BLOCKQUOTE> 
            \see percentile75Column for more information */ 
        void setPercentile75Column (size_t __value);


    protected:

        /** \brief the column that contains the x-component of the datapoints */
        int posColumn;
        /** \brief the column that contains the median-component of the datapoints */
        int medianColumn;
        /** \brief the column that contains the median-component of the datapoints. \note This column is strictly optional. */
        int meanColumn;
        /** \brief the column that contains the minimum-component of the datapoints */
        int minColumn;
        /** \brief the column that contains the maximum-component of the datapoints */
        int maxColumn;
        /** \brief the column that contains the 25% percentile-component of the datapoints */
        int percentile25Column;
        /** \brief the column that contains the 75% percentile-component of the datapoints */
        int percentile75Column;
        /** \brief if \c !=Unsorted, the data is sorted before plotting */
        DataSortOrder sortData;
        /** \brief this array contains the order of indices, in which to access the data in the data columns */
        QVector<int> sortedIndices;

        virtual void intSortData() ;

        inline  int getDataIndex(int i) {
            if (sortData==Unsorted) return i;
            return sortedIndices.value(i,i);
        }

};


/*! \brief This implements horizontal <a href="http://en.wikipedia.org/wiki/Box_plot">boxplots</a>
    \ingroup jkqtplotter_statgraphs

    the x position is given in posColumn. All other data are given in the medianColumn, minColumn, maxColumn,
    percentile25Column and percentile75Column.

    \image html plot_boxplothoricontal.png

    \note See the documentation of JKQTPBoxplotVerticalGraph for details on the properties of this class!

    \see JKQTPBoxplotVerticalGraph \ref JKQTPlotterBoxplotsGraphs

 */
class JKQTP_LIB_EXPORT JKQTPBoxplotHorizontalGraph: public JKQTPBoxplotVerticalGraph {
        Q_OBJECT
    public:
        /** \brief class constructor */
        JKQTPBoxplotHorizontalGraph(JKQTBasePlotter* parent=nullptr);
        JKQTPBoxplotHorizontalGraph(JKQTPlotter* parent);

        /** \brief plots the graph to the plotter object specified as parent */
        virtual void draw(JKQTPEnhancedPainter& painter) override;
        /** \brief plots a key marker inside the specified rectangle \a rect */
        virtual void drawKeyMarker(JKQTPEnhancedPainter& painter, QRectF& rect) override;


        /** \brief get the maximum and minimum x-value of the graph
         *
         * The result is given in the two parameters which are call-by-reference parameters!
         */
        virtual bool getXMinMax(double& minx, double& maxx, double& smallestGreaterZero) override;
        /** \brief get the maximum and minimum y-value of the graph
         *
         * The result is given in the two parameters which are call-by-reference parameters!
         */
        virtual bool getYMinMax(double& miny, double& maxy, double& smallestGreaterZero) override;
};








/*! \brief This implements a single vertical <a href="http://en.wikipedia.org/wiki/Box_plot">boxplot</a> as a "geometric element",
           where the data is directly given to the object and not stored in a column, as in JKQTPBoxplotVerticalGraph
    \ingroup jkqtplotter_statgraphs
    \ingroup jkqtplotter_geoplots


    \image html plot_boxplotverticalelement.png

    the x position is given in posColumn. All other data are given in the median, min, max,
    percentile25 and percentile75.

    The different features of a boxplot are:

    \image html boxplots.png
 */
class JKQTP_LIB_EXPORT JKQTPBoxplotVerticalElement: public JKQTPPlotObject, public JKQTPGraphBoxplotStyleMixin {
        Q_OBJECT
    public:
        /** \brief class constructor */
        JKQTPBoxplotVerticalElement(JKQTBasePlotter* parent=nullptr);
        /** \brief class constructor */
        JKQTPBoxplotVerticalElement(JKQTPlotter* parent);

        /** \brief plots the graph to the plotter object specified as parent */
        virtual void draw(JKQTPEnhancedPainter& painter) override;
        /** \brief plots a key marker inside the specified rectangle \a rect */
        virtual void drawKeyMarker(JKQTPEnhancedPainter& painter, QRectF& rect) override;
        /** \brief returns the color to be used for the key label */
        virtual QColor getKeyLabelColor() const override;


        /** \brief get the maximum and minimum x-value of the graph
         *
         * The result is given in the two parameters which are call-by-reference parameters!
         */
        virtual bool getXMinMax(double& minx, double& maxx, double& smallestGreaterZero) override;
        /** \brief get the maximum and minimum y-value of the graph
         *
         * The result is given in the two parameters which are call-by-reference parameters!
         */
        virtual bool getYMinMax(double& miny, double& maxy, double& smallestGreaterZero) override;


        /*! \copydoc pos
            \see see pos for details */ 
        void setPos(double __value);
        /*! \copydoc pos
            \see see pos for details */ 
        double getPos() const;
        /*! \copydoc median
            \see see median for details */ 
        void setMedian(double __value);
        /*! \copydoc median
            \see see median for details */ 
        double getMedian() const;
        /*! \copydoc mean
            \see see mean for details */ 
        void setMean(double __value);
        /*! \copydoc mean
            \see see mean for details */ 
        double getMean() const;
        /*! \copydoc min
            \see see min for details */ 
        void setMin(double __value);
        /*! \copydoc min
            \see see min for details */ 
        double getMin() const;
        /*! \copydoc max
            \see see max for details */ 
        void setMax(double __value);
        /*! \copydoc max
            \see see max for details */ 
        double getMax() const;
        /*! \copydoc percentile25
            \see see percentile25 for details */ 
        void setPercentile25(double __value);
        /*! \copydoc percentile25
            \see see percentile25 for details */ 
        double getPercentile25() const;
        /*! \copydoc percentile75
            \see see percentile75 for details */ 
        void setPercentile75(double __value);
        /*! \copydoc percentile75
            \see see percentile75 for details */ 
        double getPercentile75() const;

        /*! \copydoc drawMean
            \see see drawMean for details */ 
        void setDrawMean(bool __value);
        /*! \copydoc drawMean
            \see see drawMean for details */ 
        bool getDrawMean() const;
        /*! \copydoc drawMedian
            \see see drawMedian for details */ 
        void setDrawMedian(bool __value);
        /*! \copydoc drawMedian
            \see see drawMedian for details */ 
        bool getDrawMedian() const;
        /*! \copydoc drawMinMax
            \see see drawMinMax for details */ 
        void setDrawMinMax(bool __value);
        /*! \copydoc drawMinMax
            \see see drawMinMax for details */ 
        bool getDrawMinMax() const;

    protected:

        /** \brief the column that contains the x-component of the datapoints */
        double pos;
        /** \brief the column that contains the median-component of the datapoints */
        double median;
        /** \brief the column that contains the median-component of the datapoints. \note This column is strictly optional. */
        double mean;
        /** \brief indicates whether to draw the mean */
        bool drawMean;
        /** \brief indicates whether to draw the median */
        bool drawMedian;
        /** \brief indicates whether to draw the percentiles */
        bool drawMinMax;
        /** \brief the column that contains the minimum-component of the datapoints */
        double min;
        /** \brief the column that contains the maximum-component of the datapoints */
        double max;
        /** \brief the column that contains the 25% percentile-component of the datapoints */
        double percentile25;
        /** \brief the column that contains the 75% percentile-component of the datapoints */
        double percentile75;
};


/*! \brief This implements a horizontal <a href="http://en.wikipedia.org/wiki/Box_plot">boxplot</a> where the data is directly given to the
           object and not stored in a column, as in JKQTPBoxplotVerticalGraph
    \ingroup jkqtplotter_statgraphs
    \ingroup jkqtplotter_geoplots

    the x position is given in pos. All other data are given in the median, min, max,
    percentile25 and percentile75.

    \image html plot_boxplothorizontalelement.png

    \note See JKQTPBoxplotVerticalElement for a detailed documentation

    \see JKQTPBoxplotVerticalElement
 */
class JKQTP_LIB_EXPORT JKQTPBoxplotHorizontalElement: public JKQTPBoxplotVerticalElement {
        Q_OBJECT
    public:
        /** \brief class constructor */
        JKQTPBoxplotHorizontalElement(JKQTBasePlotter* parent=nullptr);
        /** \brief class constructor */
        JKQTPBoxplotHorizontalElement(JKQTPlotter* parent);

        /** \brief plots the graph to the plotter object specified as parent */
        virtual void draw(JKQTPEnhancedPainter& painter) override;
        /** \brief plots a key marker inside the specified rectangle \a rect */
        virtual void drawKeyMarker(JKQTPEnhancedPainter& painter, QRectF& rect) override;


        /** \brief get the maximum and minimum x-value of the graph
         *
         * The result is given in the two parameters which are call-by-reference parameters!
         */
        virtual bool getXMinMax(double& minx, double& maxx, double& smallestGreaterZero) override;
        /** \brief get the maximum and minimum y-value of the graph
         *
         * The result is given in the two parameters which are call-by-reference parameters!
         */
        virtual bool getYMinMax(double& miny, double& maxy, double& smallestGreaterZero) override;
};



#endif // jkqtpgraphsboxplot_H
